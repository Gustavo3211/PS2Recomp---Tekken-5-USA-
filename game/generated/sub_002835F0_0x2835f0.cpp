#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002835F0
// Address: 0x2835f0 - 0x283960
void sub_002835F0_0x2835f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002835F0_0x2835f0");
#endif

    switch (ctx->pc) {
        case 0x28368cu: goto label_28368c;
        case 0x2836d0u: goto label_2836d0;
        case 0x283734u: goto label_283734;
        case 0x2837a0u: goto label_2837a0;
        case 0x2837bcu: goto label_2837bc;
        case 0x2837dcu: goto label_2837dc;
        case 0x2837f0u: goto label_2837f0;
        case 0x283810u: goto label_283810;
        case 0x283818u: goto label_283818;
        case 0x283838u: goto label_283838;
        case 0x283858u: goto label_283858;
        case 0x283868u: goto label_283868;
        case 0x2838acu: goto label_2838ac;
        case 0x283908u: goto label_283908;
        default: break;
    }

    ctx->pc = 0x2835f0u;

label_2835f0:
    // 0x2835f0: 0x9ca50000  lwu         $a1, 0x0($a1)
    ctx->pc = 0x2835f0u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2835f4: 0x18c0000a  blez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x2835F4u;
    {
        const bool branch_taken_0x2835f4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2835F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2835F4u;
        // 0x2835f8: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2835f4) {
            ctx->pc = 0x283620u;
            goto label_283620;
        }
    }
    ctx->pc = 0x2835FCu;
    // 0x2835fc: 0x58a00009  blezl       $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2835FCu;
    {
        const bool branch_taken_0x2835fc = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x2835fc) {
            ctx->pc = 0x283600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2835FCu;
            // 0x283600: 0x9ce20000  lwu         $v0, 0x0($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283624u;
            goto label_283624;
        }
    }
    ctx->pc = 0x283604u;
    // 0x283604: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x283604u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x283608: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x283608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28360c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x28360cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x283610: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x283610u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x283614: 0xa2282f  dsubu       $a1, $a1, $v0
    ctx->pc = 0x283614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
    // 0x283618: 0x28a30005  slti        $v1, $a1, 0x5
    ctx->pc = 0x283618u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x28361c: 0x83280b  movn        $a1, $a0, $v1
    ctx->pc = 0x28361cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_283620:
    // 0x283620: 0x9ce20000  lwu         $v0, 0x0($a3)
    ctx->pc = 0x283620u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_283624:
    // 0x283624: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x283624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x283628: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x283628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x28362c: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x28362cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x283630: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x283630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x283634: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x283634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x283638: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x283638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x28363c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x28363cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x283640: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x283640u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x283644: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x283644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x283648: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x283648u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x28364c: 0x3e00008  jr          $ra
    ctx->pc = 0x28364Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28364Cu;
        // 0x283650: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28364Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283654u;
    // 0x283654: 0x0  nop
    ctx->pc = 0x283654u;
    // NOP
    // 0x283658: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x283658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x28365c: 0xffb20190  sd          $s2, 0x190($sp)
    ctx->pc = 0x28365cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 18));
    // 0x283660: 0xffb30198  sd          $s3, 0x198($sp)
    ctx->pc = 0x283660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 19));
    // 0x283664: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x283664u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283668: 0xffb00180  sd          $s0, 0x180($sp)
    ctx->pc = 0x283668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 16));
    // 0x28366c: 0xffb10188  sd          $s1, 0x188($sp)
    ctx->pc = 0x28366cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 17));
    // 0x283670: 0xffb401a0  sd          $s4, 0x1A0($sp)
    ctx->pc = 0x283670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 20));
    // 0x283674: 0xffbf01a8  sd          $ra, 0x1A8($sp)
    ctx->pc = 0x283674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 31));
    // 0x283678: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x283678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x28367c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28367Cu;
    {
        const bool branch_taken_0x28367c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28367Cu;
        // 0x283680: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28367c) {
            ctx->pc = 0x283698u;
            goto label_283698;
        }
    }
    ctx->pc = 0x283684u;
    // 0x283684: 0xc04a125  jal         func_128494
    ctx->pc = 0x283684u;
    SET_GPR_U32(ctx, 31, 0x28368Cu);
    ctx->pc = 0x283688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283684u;
    // 0x283688: 0x8e460004  lw          $a2, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x283684u, 0x28368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28368Cu;
label_28368c:
    // 0x28368c: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x28368Cu;
    {
        const bool branch_taken_0x28368c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28368Cu;
        // 0x283690: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28368c) {
            ctx->pc = 0x283874u;
            goto label_283874;
        }
    }
    ctx->pc = 0x283694u;
    // 0x283694: 0x0  nop
    ctx->pc = 0x283694u;
    // NOP
label_283698:
    // 0x283698: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x283698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x28369c: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x28369cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2836a0: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x2836a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2836a4: 0x6a450007  ldl         $a1, 0x7($s2)
    ctx->pc = 0x2836a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2836a8: 0x6e450000  ldr         $a1, 0x0($s2)
    ctx->pc = 0x2836a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2836ac: 0x6a46000f  ldl         $a2, 0xF($s2)
    ctx->pc = 0x2836acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2836b0: 0x6e460008  ldr         $a2, 0x8($s2)
    ctx->pc = 0x2836b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2836b4: 0xb2650007  sdl         $a1, 0x7($s3)
    ctx->pc = 0x2836b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2836b8: 0xb6650000  sdr         $a1, 0x0($s3)
    ctx->pc = 0x2836b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2836bc: 0xb266000f  sdl         $a2, 0xF($s3)
    ctx->pc = 0x2836bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2836c0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2836c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2836c4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2836C4u;
    {
        const bool branch_taken_0x2836c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2836C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836C4u;
        // 0x2836c8: 0xb6660008  sdr         $a2, 0x8($s3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836c4) {
            ctx->pc = 0x283730u;
            goto label_283730;
        }
    }
    ctx->pc = 0x2836CCu;
    // 0x2836cc: 0x26420050  addiu       $v0, $s2, 0x50
    ctx->pc = 0x2836ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_2836d0:
    // 0x2836d0: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x2836d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2836d4: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x2836d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2836d8: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x2836d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2836dc: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x2836dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2836e0: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x2836e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2836e4: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x2836e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2836e8: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x2836e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2836ec: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x2836ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2836f0: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x2836f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2836f4: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x2836f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2836f8: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x2836f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2836fc: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x2836fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x283700: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x283700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x283704: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x283704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x283708: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x283708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28370c: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x28370cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x283710: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x283710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x283714: 0x0  nop
    ctx->pc = 0x283714u;
    // NOP
    // 0x283718: 0x0  nop
    ctx->pc = 0x283718u;
    // NOP
    // 0x28371c: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x28371Cu;
    {
        const bool branch_taken_0x28371c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x283720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28371Cu;
        // 0x283720: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28371c) {
            ctx->pc = 0x2836D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2836d0;
        }
    }
    ctx->pc = 0x283724u;
    // 0x283724: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x283724u;
    {
        const bool branch_taken_0x283724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283724) {
            ctx->pc = 0x283768u;
            goto label_283768;
        }
    }
    ctx->pc = 0x28372Cu;
    // 0x28372c: 0x0  nop
    ctx->pc = 0x28372cu;
    // NOP
label_283730:
    // 0x283730: 0x26420050  addiu       $v0, $s2, 0x50
    ctx->pc = 0x283730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_283734:
    // 0x283734: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x283734u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x283738: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x283738u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x28373c: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x28373cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x283740: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x283740u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x283744: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x283744u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x283748: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x283748u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x28374c: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x28374cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x283750: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x283750u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x283754: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x283754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x283758: 0x0  nop
    ctx->pc = 0x283758u;
    // NOP
    // 0x28375c: 0x0  nop
    ctx->pc = 0x28375cu;
    // NOP
    // 0x283760: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x283760u;
    {
        const bool branch_taken_0x283760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x283764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283760u;
        // 0x283764: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283760) {
            ctx->pc = 0x283734u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283734;
        }
    }
    ctx->pc = 0x283768u;
label_283768:
    // 0x283768: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x283768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x28376c: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x28376cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x283770: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x283770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x283774: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x283774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x283778: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x283778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28377c: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x28377cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x283780: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x283780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x283784: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x283784u;
    {
        const bool branch_taken_0x283784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283784u;
        // 0x283788: 0x8e420060  lw          $v0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283784) {
            ctx->pc = 0x2837B0u;
            goto label_2837b0;
        }
    }
    ctx->pc = 0x28378Cu;
    // 0x28378c: 0x26640064  addiu       $a0, $s3, 0x64
    ctx->pc = 0x28378cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x283790: 0x8e660060  lw          $a2, 0x60($s3)
    ctx->pc = 0x283790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x283794: 0x26450064  addiu       $a1, $s2, 0x64
    ctx->pc = 0x283794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
    // 0x283798: 0xc0a0d7c  jal         func_2835F0
    ctx->pc = 0x283798u;
    SET_GPR_U32(ctx, 31, 0x2837A0u);
    ctx->pc = 0x28379Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283798u;
    // 0x28379c: 0x463023  subu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2835F0u;
    goto label_2835f0;
    ctx->pc = 0x2837A0u;
label_2837a0:
    // 0x2837a0: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x2837a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x2837a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2837A4u;
    {
        const bool branch_taken_0x2837a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2837A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2837A4u;
        // 0x2837a8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2837a4) {
            ctx->pc = 0x2837B8u;
            goto label_2837b8;
        }
    }
    ctx->pc = 0x2837ACu;
    // 0x2837ac: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x2837acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_2837b0:
    // 0x2837b0: 0xae620060  sw          $v0, 0x60($s3)
    ctx->pc = 0x2837b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
    // 0x2837b4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2837b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2837b8:
    // 0x2837b8: 0x148080  sll         $s0, $s4, 2
    ctx->pc = 0x2837b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_2837bc:
    // 0x2837bc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2837bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2837c0: 0x2508821  addu        $s1, $s2, $s0
    ctx->pc = 0x2837c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2837c4: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x2837c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x2837c8: 0x2604007c  addiu       $a0, $s0, 0x7C
    ctx->pc = 0x2837c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    // 0x2837cc: 0x2625007c  addiu       $a1, $s1, 0x7C
    ctx->pc = 0x2837ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
    // 0x2837d0: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x2837d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2837d4: 0xc0a0d64  jal         func_283590
    ctx->pc = 0x2837D4u;
    SET_GPR_U32(ctx, 31, 0x2837DCu);
    ctx->pc = 0x2837D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2837D4u;
    // 0x2837d8: 0x262700b0  addiu       $a3, $s1, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283590u, 0x2837D4u, 0x2837DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2837DCu;
label_2837dc:
    // 0x2837dc: 0x260400e4  addiu       $a0, $s0, 0xE4
    ctx->pc = 0x2837dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 228));
    // 0x2837e0: 0x26060118  addiu       $a2, $s0, 0x118
    ctx->pc = 0x2837e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x2837e4: 0x26270118  addiu       $a3, $s1, 0x118
    ctx->pc = 0x2837e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 280));
    // 0x2837e8: 0xc0a0d64  jal         func_283590
    ctx->pc = 0x2837E8u;
    SET_GPR_U32(ctx, 31, 0x2837F0u);
    ctx->pc = 0x2837ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2837E8u;
    // 0x2837ec: 0x262500e4  addiu       $a1, $s1, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283590u, 0x2837E8u, 0x2837F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2837F0u;
label_2837f0:
    // 0x2837f0: 0x2a82000d  slti        $v0, $s4, 0xD
    ctx->pc = 0x2837f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2837f4: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2837F4u;
    {
        const bool branch_taken_0x2837f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2837F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2837F4u;
        // 0x2837f8: 0x148080  sll         $s0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2837f4) {
            ctx->pc = 0x2837BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2837bc;
        }
    }
    ctx->pc = 0x2837FCu;
    // 0x2837fc: 0x2664014c  addiu       $a0, $s3, 0x14C
    ctx->pc = 0x2837fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 332));
    // 0x283800: 0x2645014c  addiu       $a1, $s2, 0x14C
    ctx->pc = 0x283800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 332));
    // 0x283804: 0x26660150  addiu       $a2, $s3, 0x150
    ctx->pc = 0x283804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
    // 0x283808: 0xc0a0d64  jal         func_283590
    ctx->pc = 0x283808u;
    SET_GPR_U32(ctx, 31, 0x283810u);
    ctx->pc = 0x28380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283808u;
    // 0x28380c: 0x26470150  addiu       $a3, $s2, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283590u, 0x283808u, 0x283810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283810u;
label_283810:
    // 0x283810: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x283810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283814: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x283814u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_283818:
    // 0x283818: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x283818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28381c: 0x2442821  addu        $a1, $s2, $a0
    ctx->pc = 0x28381cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x283820: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x283820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x283824: 0x24860160  addiu       $a2, $a0, 0x160
    ctx->pc = 0x283824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x283828: 0x24840154  addiu       $a0, $a0, 0x154
    ctx->pc = 0x283828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 340));
    // 0x28382c: 0x24a70160  addiu       $a3, $a1, 0x160
    ctx->pc = 0x28382cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 352));
    // 0x283830: 0xc0a0d64  jal         func_283590
    ctx->pc = 0x283830u;
    SET_GPR_U32(ctx, 31, 0x283838u);
    ctx->pc = 0x283834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283830u;
    // 0x283834: 0x24a50154  addiu       $a1, $a1, 0x154 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 340));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283590u, 0x283830u, 0x283838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283838u;
label_283838:
    // 0x283838: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x283838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x28383c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x28383Cu;
    {
        const bool branch_taken_0x28383c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28383Cu;
        // 0x283840: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28383c) {
            ctx->pc = 0x283818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283818;
        }
    }
    ctx->pc = 0x283844u;
    // 0x283844: 0x26470170  addiu       $a3, $s2, 0x170
    ctx->pc = 0x283844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
    // 0x283848: 0x2664016c  addiu       $a0, $s3, 0x16C
    ctx->pc = 0x283848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 364));
    // 0x28384c: 0x2645016c  addiu       $a1, $s2, 0x16C
    ctx->pc = 0x28384cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 364));
    // 0x283850: 0xc0a0d64  jal         func_283590
    ctx->pc = 0x283850u;
    SET_GPR_U32(ctx, 31, 0x283858u);
    ctx->pc = 0x283854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283850u;
    // 0x283854: 0x26660170  addiu       $a2, $s3, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283590u, 0x283850u, 0x283858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283858u;
label_283858:
    // 0x283858: 0x26640174  addiu       $a0, $s3, 0x174
    ctx->pc = 0x283858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 372));
    // 0x28385c: 0x27a50174  addiu       $a1, $sp, 0x174
    ctx->pc = 0x28385cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
    // 0x283860: 0xc04a125  jal         func_128494
    ctx->pc = 0x283860u;
    SET_GPR_U32(ctx, 31, 0x283868u);
    ctx->pc = 0x283864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283860u;
    // 0x283864: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x283860u, 0x283868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283868u;
label_283868:
    // 0x283868: 0x24030180  addiu       $v1, $zero, 0x180
    ctx->pc = 0x283868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x28386c: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x28386cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x283870: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x283870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_283874:
    // 0x283874: 0xdfb00180  ld          $s0, 0x180($sp)
    ctx->pc = 0x283874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x283878: 0xdfb10188  ld          $s1, 0x188($sp)
    ctx->pc = 0x283878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x28387c: 0xdfb20190  ld          $s2, 0x190($sp)
    ctx->pc = 0x28387cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x283880: 0xdfb30198  ld          $s3, 0x198($sp)
    ctx->pc = 0x283880u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x283884: 0xdfb401a0  ld          $s4, 0x1A0($sp)
    ctx->pc = 0x283884u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x283888: 0xdfbf01a8  ld          $ra, 0x1A8($sp)
    ctx->pc = 0x283888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x28388c: 0x3e00008  jr          $ra
    ctx->pc = 0x28388Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28388Cu;
        // 0x283890: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28388Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283894u;
    // 0x283894: 0x0  nop
    ctx->pc = 0x283894u;
    // NOP
    // 0x283898: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x283898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x28389c: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x28389cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2838a0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2838a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2838a4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2838A4u;
    {
        const bool branch_taken_0x2838a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2838A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2838A4u;
        // 0x2838a8: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2838a4) {
            ctx->pc = 0x283908u;
            goto label_283908;
        }
    }
    ctx->pc = 0x2838ACu;
label_2838ac:
    // 0x2838ac: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x2838acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2838b0: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x2838b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2838b4: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x2838b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2838b8: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x2838b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2838bc: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x2838bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2838c0: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x2838c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2838c4: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x2838c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2838c8: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x2838c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2838cc: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x2838ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2838d0: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x2838d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2838d4: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x2838d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2838d8: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x2838d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2838dc: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x2838dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2838e0: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x2838e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2838e4: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x2838e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2838e8: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x2838e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2838ec: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2838ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2838f0: 0x0  nop
    ctx->pc = 0x2838f0u;
    // NOP
    // 0x2838f4: 0x0  nop
    ctx->pc = 0x2838f4u;
    // NOP
    // 0x2838f8: 0x1465ffec  bne         $v1, $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2838F8u;
    {
        const bool branch_taken_0x2838f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2838FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2838F8u;
        // 0x2838fc: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2838f8) {
            ctx->pc = 0x2838ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2838ac;
        }
    }
    ctx->pc = 0x283900u;
    // 0x283900: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x283900u;
    {
        const bool branch_taken_0x283900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283900) {
            ctx->pc = 0x28393Cu;
            goto label_28393c;
        }
    }
    ctx->pc = 0x283908u;
label_283908:
    // 0x283908: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x283908u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28390c: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x28390cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x283910: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x283910u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x283914: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x283914u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x283918: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x283918u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x28391c: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x28391cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x283920: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x283920u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x283924: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x283924u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x283928: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x283928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x28392c: 0x0  nop
    ctx->pc = 0x28392cu;
    // NOP
    // 0x283930: 0x0  nop
    ctx->pc = 0x283930u;
    // NOP
    // 0x283934: 0x1465fff4  bne         $v1, $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x283934u;
    {
        const bool branch_taken_0x283934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x283938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283934u;
        // 0x283938: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283934) {
            ctx->pc = 0x283908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283908;
        }
    }
    ctx->pc = 0x28393Cu;
label_28393c:
    // 0x28393c: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x28393cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x283940: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x283940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x283944: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x283944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x283948: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x283948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28394c: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x28394cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x283950: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x283950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x283954: 0x3e00008  jr          $ra
    ctx->pc = 0x283954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283954u;
        // 0x283958: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28395Cu;
    // 0x28395c: 0x0  nop
    ctx->pc = 0x28395cu;
    // NOP
    ctx->pc = 0x283960u;
}
