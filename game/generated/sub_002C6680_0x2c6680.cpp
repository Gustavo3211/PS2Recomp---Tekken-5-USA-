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

// Function: sub_002C6680
// Address: 0x2c6680 - 0x2c7348
void sub_002C6680_0x2c6680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6680_0x2c6680");
#endif

    switch (ctx->pc) {
        case 0x2c671cu: goto label_2c671c;
        case 0x2c6750u: goto label_2c6750;
        case 0x2c6770u: goto label_2c6770;
        case 0x2c68c0u: goto label_2c68c0;
        case 0x2c68c8u: goto label_2c68c8;
        case 0x2c68e0u: goto label_2c68e0;
        case 0x2c6970u: goto label_2c6970;
        case 0x2c6af8u: goto label_2c6af8;
        case 0x2c6b88u: goto label_2c6b88;
        case 0x2c6c10u: goto label_2c6c10;
        case 0x2c6c50u: goto label_2c6c50;
        case 0x2c6dd8u: goto label_2c6dd8;
        case 0x2c6e68u: goto label_2c6e68;
        case 0x2c7060u: goto label_2c7060;
        case 0x2c70c4u: goto label_2c70c4;
        case 0x2c70e0u: goto label_2c70e0;
        case 0x2c72a4u: goto label_2c72a4;
        default: break;
    }

    ctx->pc = 0x2c6680u;

label_2c6680:
    // 0x2c6680: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x2c6680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x2c6684: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x2c6684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    // 0x2c6688: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x2c6688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x2c668c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2c668cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6690: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x2c6690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x2c6694: 0x3114ffff  andi        $s4, $t0, 0xFFFF
    ctx->pc = 0x2c6694u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2c6698: 0xffb50178  sd          $s5, 0x178($sp)
    ctx->pc = 0x2c6698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 21));
    // 0x2c669c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2c669cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c66a0: 0xffb70188  sd          $s7, 0x188($sp)
    ctx->pc = 0x2c66a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 23));
    // 0x2c66a4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2c66a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c66a8: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x2c66a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x2c66ac: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2c66acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c66b0: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x2c66b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x2c66b4: 0x2a0702d  daddu       $t6, $s5, $zero
    ctx->pc = 0x2c66b4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c66b8: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x2c66b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
    // 0x2c66bc: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x2c66bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2c66c0: 0xffb60180  sd          $s6, 0x180($sp)
    ctx->pc = 0x2c66c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
    // 0x2c66c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2c66c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c66c8: 0xffbf0198  sd          $ra, 0x198($sp)
    ctx->pc = 0x2c66c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 31));
    // 0x2c66cc: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x2c66ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c66d0: 0x95cd0000  lhu         $t5, 0x0($t6)
    ctx->pc = 0x2c66d0u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2c66d4: 0xafa90144  sw          $t1, 0x144($sp)
    ctx->pc = 0x2c66d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 9));
    // 0x2c66d8: 0x4d102a  slt         $v0, $v0, $t5
    ctx->pc = 0x2c66d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x2c66dc: 0x25a3ffff  addiu       $v1, $t5, -0x1
    ctx->pc = 0x2c66dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x2c66e0: 0x95d10004  lhu         $s1, 0x4($t6)
    ctx->pc = 0x2c66e0u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x2c66e4: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x2c66e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x2c66e8: 0x81d60002  lb          $s6, 0x2($t6)
    ctx->pc = 0x2c66e8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x2c66ec: 0x81ce0003  lb          $t6, 0x3($t6)
    ctx->pc = 0x2c66ecu;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 3)));
    // 0x2c66f0: 0x11440004  beq         $t2, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C66F0u;
    {
        const bool branch_taken_0x2c66f0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C66F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C66F0u;
        // 0x2c66f4: 0xafae0148  sw          $t6, 0x148($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c66f0) {
            ctx->pc = 0x2C6704u;
            goto label_2c6704;
        }
    }
    ctx->pc = 0x2C66F8u;
    // 0x2c66f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c66f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c66fc: 0x16230236  bne         $s1, $v1, . + 4 + (0x236 << 2)
    ctx->pc = 0x2C66FCu;
    {
        const bool branch_taken_0x2c66fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C6700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C66FCu;
        // 0x2c6700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c66fc) {
            ctx->pc = 0x2C6FD8u;
            goto label_2c6fd8;
        }
    }
    ctx->pc = 0x2C6704u;
label_2c6704:
    // 0x2c6704: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x2c6704u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2c6708: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c6708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c670c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c670cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6710: 0x26100006  addiu       $s0, $s0, 0x6
    ctx->pc = 0x2c6710u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x2c6714: 0xc04a125  jal         func_128494
    ctx->pc = 0x2C6714u;
    SET_GPR_U32(ctx, 31, 0x2C671Cu);
    ctx->pc = 0x2C6718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6714u;
    // 0x2c6718: 0x26a50006  addiu       $a1, $s5, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x2C6714u, 0x2C671Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C671Cu;
label_2c671c:
    // 0x2c671c: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x2c671cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2c6720: 0x2912023  subu        $a0, $s4, $s1
    ctx->pc = 0x2c6720u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x2c6724: 0x27b40080  addiu       $s4, $sp, 0x80
    ctx->pc = 0x2c6724u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c6728: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2c6728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2c672c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2c672cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2c6730: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c6730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c6734: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c6734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6738: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c6738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c673c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2c673cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2c6740: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c6740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6744: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x2c6744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2c6748: 0xc04a151  jal         func_128544
    ctx->pc = 0x2C6748u;
    SET_GPR_U32(ctx, 31, 0x2C6750u);
    ctx->pc = 0x2C674Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6748u;
    // 0x2c674c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2C6748u, 0x2C6750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6750u;
label_2c6750:
    // 0x2c6750: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x2c6750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2c6754: 0x2b07021  addu        $t6, $s5, $s0
    ctx->pc = 0x2c6754u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x2c6758: 0x18400041  blez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2C6758u;
    {
        const bool branch_taken_0x2c6758 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6758u;
        // 0x2c675c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6758) {
            ctx->pc = 0x2C6860u;
            goto label_2c6860;
        }
    }
    ctx->pc = 0x2C6760u;
    // 0x2c6760: 0xc7839344  lwc1        $f3, -0x6CBC($gp)
    ctx->pc = 0x2c6760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6764: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2c6764u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6768: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2c6768u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c676c: 0x0  nop
    ctx->pc = 0x2c676cu;
    // NOP
label_2c6770:
    // 0x2c6770: 0x1ea1004  sllv        $v0, $t2, $t7
    ctx->pc = 0x2c6770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x2c6774: 0x2e21024  and         $v0, $s7, $v0
    ctx->pc = 0x2c6774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
    // 0x2c6778: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2C6778u;
    {
        const bool branch_taken_0x2c6778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6778u;
        // 0x2c677c: 0xf1840  sll         $v1, $t7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6778) {
            ctx->pc = 0x2C6828u;
            goto label_2c6828;
        }
    }
    ctx->pc = 0x2C6780u;
    // 0x2c6780: 0x6f1821  addu        $v1, $v1, $t7
    ctx->pc = 0x2c6780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x2c6784: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2c6784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c6788: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x2c6788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2c678c: 0x1234021  addu        $t0, $t1, $v1
    ctx->pc = 0x2c678cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2c6790: 0x89c40003  lwl         $a0, 0x3($t6)
    ctx->pc = 0x2c6790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x2c6794: 0x99c40000  lwr         $a0, 0x0($t6)
    ctx->pc = 0x2c6794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x2c6798: 0x81c50004  lb          $a1, 0x4($t6)
    ctx->pc = 0x2c6798u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x2c679c: 0x81c60005  lb          $a2, 0x5($t6)
    ctx->pc = 0x2c679cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 5)));
    // 0x2c67a0: 0xa8440083  swl         $a0, 0x83($v0)
    ctx->pc = 0x2c67a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 131); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2c67a4: 0xb8440080  swr         $a0, 0x80($v0)
    ctx->pc = 0x2c67a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 128); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2c67a8: 0xa0450084  sb          $a1, 0x84($v0)
    ctx->pc = 0x2c67a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 132), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c67ac: 0xa0460085  sb          $a2, 0x85($v0)
    ctx->pc = 0x2c67acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 133), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c67b0: 0x25ce0006  addiu       $t6, $t6, 0x6
    ctx->pc = 0x2c67b0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 6));
    // 0x2c67b4: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x2c67b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2c67b8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2c67b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2c67bc: 0x85070000  lh          $a3, 0x0($t0)
    ctx->pc = 0x2c67bcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2c67c0: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x2c67c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2c67c4: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x2c67c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x2c67c8: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x2c67c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c67cc: 0x2c71007  srav        $v0, $a3, $s6
    ctx->pc = 0x2c67ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 22) & 0x1F));
    // 0x2c67d0: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x2c67d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c67d4: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x2c67d4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c67d8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2c67d8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c67dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c67dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c67e0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2c67e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c67e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c67e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c67e8: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x2c67e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c67ec: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x2c67ecu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c67f0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c67f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c67f4: 0x2c21007  srav        $v0, $v0, $s6
    ctx->pc = 0x2c67f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 22) & 0x1F));
    // 0x2c67f8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2c67f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2c67fc: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x2c67fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c6800: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2c6800u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2c6804: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2c6804u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2c6808: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x2c6808u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c680c: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x2c680cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2c6810: 0x2c21007  srav        $v0, $v0, $s6
    ctx->pc = 0x2c6810u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 22) & 0x1F));
    // 0x2c6814: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x2c6814u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2c6818: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x2c6818u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c681c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C681Cu;
    {
        const bool branch_taken_0x2c681c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C681Cu;
        // 0x2c6820: 0xe6420000  swc1        $f2, 0x0($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c681c) {
            ctx->pc = 0x2C684Cu;
            goto label_2c684c;
        }
    }
    ctx->pc = 0x2C6824u;
    // 0x2c6824: 0x0  nop
    ctx->pc = 0x2c6824u;
    // NOP
label_2c6828:
    // 0x2c6828: 0x69c20007  ldl         $v0, 0x7($t6)
    ctx->pc = 0x2c6828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2c682c: 0x6dc20000  ldr         $v0, 0x0($t6)
    ctx->pc = 0x2c682cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2c6830: 0x89c3000b  lwl         $v1, 0xB($t6)
    ctx->pc = 0x2c6830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x2c6834: 0x99c30008  lwr         $v1, 0x8($t6)
    ctx->pc = 0x2c6834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x2c6838: 0xb2420007  sdl         $v0, 0x7($s2)
    ctx->pc = 0x2c6838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c683c: 0xb6420000  sdr         $v0, 0x0($s2)
    ctx->pc = 0x2c683cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c6840: 0xaa43000b  swl         $v1, 0xB($s2)
    ctx->pc = 0x2c6840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2c6844: 0xba430008  swr         $v1, 0x8($s2)
    ctx->pc = 0x2c6844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2c6848: 0x25ce000c  addiu       $t6, $t6, 0xC
    ctx->pc = 0x2c6848u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12));
label_2c684c:
    // 0x2c684c: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x2c684cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2c6850: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2c6850u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2c6854: 0x1e6102a  slt         $v0, $t7, $a2
    ctx->pc = 0x2c6854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2c6858: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x2C6858u;
    {
        const bool branch_taken_0x2c6858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6858u;
        // 0x2c685c: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6858) {
            ctx->pc = 0x2C6770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6770;
        }
    }
    ctx->pc = 0x2C6860u;
label_2c6860:
    // 0x2c6860: 0x126001dd  beqz        $s3, . + 4 + (0x1DD << 2)
    ctx->pc = 0x2C6860u;
    {
        const bool branch_taken_0x2c6860 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6860u;
        // 0x2c6864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6860) {
            ctx->pc = 0x2C6FD8u;
            goto label_2c6fd8;
        }
    }
    ctx->pc = 0x2C6868u;
    // 0x2c6868: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x2c6868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2c686c: 0x2665000e  addiu       $a1, $s3, 0xE
    ctx->pc = 0x2c686cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 14));
    // 0x2c6870: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x2c6870u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2c6874: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c6874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6878: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x2c6878u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2c687c: 0x2b07021  addu        $t6, $s5, $s0
    ctx->pc = 0x2c687cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x2c6880: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2c6880u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2c6884: 0x1d17021  addu        $t6, $t6, $s1
    ctx->pc = 0x2c6884u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
    // 0x2c6888: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c6888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c688c: 0x3095000f  andi        $s5, $a0, 0xF
    ctx->pc = 0x2c688cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x2c6890: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x2c6890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x2c6894: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x2c6894u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6898: 0x88470003  lwl         $a3, 0x3($v0)
    ctx->pc = 0x2c6898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x2c689c: 0x98470000  lwr         $a3, 0x0($v0)
    ctx->pc = 0x2c689cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x2c68a0: 0xaba70143  swl         $a3, 0x143($sp)
    ctx->pc = 0x2c68a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 323); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2c68a4: 0xbba70140  swr         $a3, 0x140($sp)
    ctx->pc = 0x2c68a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 320); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2c68a8: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x2c68a8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c68ac: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2c68acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2c68b0: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x2c68b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2c68b4: 0x18c001c7  blez        $a2, . + 4 + (0x1C7 << 2)
    ctx->pc = 0x2C68B4u;
    {
        const bool branch_taken_0x2c68b4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2C68B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C68B4u;
        // 0x2c68b8: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c68b4) {
            ctx->pc = 0x2C6FD4u;
            goto label_2c6fd4;
        }
    }
    ctx->pc = 0x2C68BCu;
    // 0x2c68bc: 0x0  nop
    ctx->pc = 0x2c68bcu;
    // NOP
label_2c68c0:
    // 0x2c68c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c68c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c68c4: 0xf9840  sll         $s3, $t7, 1
    ctx->pc = 0x2c68c4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
label_2c68c8:
    // 0x2c68c8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2c68c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c68cc: 0xaf8ebb0c  sw          $t6, -0x44F4($gp)
    ctx->pc = 0x2c68ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949644), GPR_U32(ctx, 14));
    // 0x2c68d0: 0xaf80cb14  sw          $zero, -0x34EC($gp)
    ctx->pc = 0x2c68d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953748), GPR_U32(ctx, 0));
    // 0x2c68d4: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x2c68d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c68d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C68D8u;
    {
        const bool branch_taken_0x2c68d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C68DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C68D8u;
        // 0x2c68dc: 0xaf80bb10  sw          $zero, -0x44F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c68d8) {
            ctx->pc = 0x2C68E8u;
            goto label_2c68e8;
        }
    }
    ctx->pc = 0x2C68E0u;
label_2c68e0:
    // 0x2c68e0: 0xaf87bb10  sw          $a3, -0x44F0($gp)
    ctx->pc = 0x2c68e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949648), GPR_U32(ctx, 7));
    // 0x2c68e4: 0x0  nop
    ctx->pc = 0x2c68e4u;
    // NOP
label_2c68e8:
    // 0x2c68e8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x2c68e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x2c68ec: 0x8f84bb0c  lw          $a0, -0x44F4($gp)
    ctx->pc = 0x2c68ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949644)));
    // 0x2c68f0: 0xaf88cb14  sw          $t0, -0x34EC($gp)
    ctx->pc = 0x2c68f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953748), GPR_U32(ctx, 8));
    // 0x2c68f4: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x2c68f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x2c68f8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c68f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c68fc: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x2c68fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6900: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2c6900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c6904: 0x28e40006  slti        $a0, $a3, 0x6
    ctx->pc = 0x2c6904u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2c6908: 0x278abb0c  addiu       $t2, $gp, -0x44F4
    ctx->pc = 0x2c6908u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949644));
    // 0x2c690c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c690cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c6910: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x2c6910u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x2c6914: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x2c6914u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x2c6918: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2C6918u;
    {
        const bool branch_taken_0x2c6918 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6918u;
        // 0x2c691c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6918) {
            ctx->pc = 0x2C68E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c68e0;
        }
    }
    ctx->pc = 0x2C6920u;
    // 0x2c6920: 0x24e4fffa  addiu       $a0, $a3, -0x6
    ctx->pc = 0x2c6920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967290));
    // 0x2c6924: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c6924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c6928: 0x26f1821  addu        $v1, $s3, $t7
    ctx->pc = 0x2c6928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x2c692c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2c692cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6930: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x2c6930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c6934: 0x862006  srlv        $a0, $a2, $a0
    ctx->pc = 0x2c6934u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c6938: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2c6938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2c693c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2c693cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2c6940: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2c6940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c6944: 0x28e50004  slti        $a1, $a3, 0x4
    ctx->pc = 0x2c6944u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c6948: 0xc24024  and         $t0, $a2, $v0
    ctx->pc = 0x2c6948u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2c694c: 0x3099ffff  andi        $t9, $a0, 0xFFFF
    ctx->pc = 0x2c694cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2c6950: 0x2838021  addu        $s0, $s4, $v1
    ctx->pc = 0x2c6950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2c6954: 0xa780bb14  sh          $zero, -0x44EC($gp)
    ctx->pc = 0x2c6954u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294949652), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c6958: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2c6958u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c695c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c695cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6960: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C6960u;
    {
        const bool branch_taken_0x2c6960 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6960u;
        // 0x2c6964: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6960) {
            ctx->pc = 0x2C69A4u;
            goto label_2c69a4;
        }
    }
    ctx->pc = 0x2C6968u;
    // 0x2c6968: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x2c6968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c696c: 0x0  nop
    ctx->pc = 0x2c696cu;
    // NOP
label_2c6970:
    // 0x2c6970: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x2c6970u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x2c6974: 0xaf87bb10  sw          $a3, -0x44F0($gp)
    ctx->pc = 0x2c6974u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949648), GPR_U32(ctx, 7));
    // 0x2c6978: 0xaf88cb14  sw          $t0, -0x34EC($gp)
    ctx->pc = 0x2c6978u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953748), GPR_U32(ctx, 8));
    // 0x2c697c: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x2c697cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x2c6980: 0x8f84bb0c  lw          $a0, -0x44F4($gp)
    ctx->pc = 0x2c6980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949644)));
    // 0x2c6984: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x2c6984u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6988: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2c6988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c698c: 0x28e50004  slti        $a1, $a3, 0x4
    ctx->pc = 0x2c698cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c6990: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2c6990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c6994: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c6994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c6998: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2c6998u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2c699c: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C699Cu;
    {
        const bool branch_taken_0x2c699c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C69A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C699Cu;
        // 0x2c69a0: 0x1034025  or          $t0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c699c) {
            ctx->pc = 0x2C6970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6970;
        }
    }
    ctx->pc = 0x2C69A4u;
label_2c69a4:
    // 0x2c69a4: 0x2564fffc  addiu       $a0, $t3, -0x4
    ctx->pc = 0x2c69a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x2c69a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c69a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c69ac: 0x881806  srlv        $v1, $t0, $a0
    ctx->pc = 0x2c69acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c69b0: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x2c69b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c69b4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2c69b4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2c69b8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2c69b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2c69bc: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x2c69bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2c69c0: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x2c69c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2c69c4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2c69c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c69c8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2c69c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c69cc: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2C69CCu;
    {
        const bool branch_taken_0x2c69cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C69D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C69CCu;
        // 0x2c69d0: 0xe0582d  daddu       $t3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c69cc) {
            ctx->pc = 0x2C6B60u;
            goto label_2c6b60;
        }
    }
    ctx->pc = 0x2C69D4u;
    // 0x2c69d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c69d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c69d8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2c69d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2c69dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c69dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c69e0: 0x8c63e2a0  lw          $v1, -0x1D60($v1)
    ctx->pc = 0x2c69e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959776)));
    // 0x2c69e4: 0x600008  jr          $v1
    ctx->pc = 0x2C69E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C69F0u: goto label_2c69f0;
            case 0x2C6A00u: goto label_2c6a00;
            case 0x2C6A10u: goto label_2c6a10;
            case 0x2C6A20u: goto label_2c6a20;
            case 0x2C6A30u: goto label_2c6a30;
            case 0x2C6A40u: goto label_2c6a40;
            case 0x2C6A50u: goto label_2c6a50;
            case 0x2C6A60u: goto label_2c6a60;
            case 0x2C6A70u: goto label_2c6a70;
            case 0x2C6A80u: goto label_2c6a80;
            case 0x2C6A90u: goto label_2c6a90;
            case 0x2C6AA0u: goto label_2c6aa0;
            case 0x2C6AB0u: goto label_2c6ab0;
            case 0x2C6AC0u: goto label_2c6ac0;
            case 0x2C6AD0u: goto label_2c6ad0;
            case 0x2C6AE0u: goto label_2c6ae0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C69E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C69ECu;
    // 0x2c69ec: 0x0  nop
    ctx->pc = 0x2c69ecu;
    // NOP
label_2c69f0:
    // 0x2c69f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c69f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c69f4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2C69F4u;
    {
        const bool branch_taken_0x2c69f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C69F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C69F4u;
        // 0x2c69f8: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c69f4) {
            ctx->pc = 0x2C6B60u;
            goto label_2c6b60;
        }
    }
    ctx->pc = 0x2C69FCu;
    // 0x2c69fc: 0x0  nop
    ctx->pc = 0x2c69fcu;
    // NOP
label_2c6a00:
    // 0x2c6a00: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2c6a00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c6a04: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2C6A04u;
    {
        const bool branch_taken_0x2c6a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A04u;
        // 0x2c6a08: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6a04) {
            ctx->pc = 0x2C6B60u;
            goto label_2c6b60;
        }
    }
    ctx->pc = 0x2C6A0Cu;
    // 0x2c6a0c: 0x0  nop
    ctx->pc = 0x2c6a0cu;
    // NOP
label_2c6a10:
    // 0x2c6a10: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2c6a10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c6a14: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2C6A14u;
    {
        const bool branch_taken_0x2c6a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A14u;
        // 0x2c6a18: 0x240cfffc  addiu       $t4, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6a14) {
            ctx->pc = 0x2C6B60u;
            goto label_2c6b60;
        }
    }
    ctx->pc = 0x2C6A1Cu;
    // 0x2c6a1c: 0x0  nop
    ctx->pc = 0x2c6a1cu;
    // NOP
label_2c6a20:
    // 0x2c6a20: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2c6a20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c6a24: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2C6A24u;
    {
        const bool branch_taken_0x2c6a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A24u;
        // 0x2c6a28: 0x240c0005  addiu       $t4, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6a24) {
            ctx->pc = 0x2C6B60u;
            goto label_2c6b60;
        }
    }
    ctx->pc = 0x2C6A2Cu;
    // 0x2c6a2c: 0x0  nop
    ctx->pc = 0x2c6a2cu;
    // NOP
label_2c6a30:
    // 0x2c6a30: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2c6a30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c6a34: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2C6A34u;
    {
        const bool branch_taken_0x2c6a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A34u;
        // 0x2c6a38: 0x240cffec  addiu       $t4, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6a34) {
            ctx->pc = 0x2C6B60u;
            goto label_2c6b60;
        }
    }
    ctx->pc = 0x2C6A3Cu;
    // 0x2c6a3c: 0x0  nop
    ctx->pc = 0x2c6a3cu;
    // NOP
label_2c6a40:
    // 0x2c6a40: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x2c6a40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c6a44: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2C6A44u;
    {
        const bool branch_taken_0x2c6a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A44u;
        // 0x2c6a48: 0x240c0015  addiu       $t4, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6a44) {
            ctx->pc = 0x2C6B60u;
            goto label_2c6b60;
        }
    }
    ctx->pc = 0x2C6A4Cu;
    // 0x2c6a4c: 0x0  nop
    ctx->pc = 0x2c6a4cu;
    // NOP
label_2c6a50:
    // 0x2c6a50: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x2c6a50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c6a54: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2C6A54u;
    {
        const bool branch_taken_0x2c6a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A54u;
        // 0x2c6a58: 0x240cffac  addiu       $t4, $zero, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6a54) {
            ctx->pc = 0x2C6B60u;
            goto label_2c6b60;
        }
    }
    ctx->pc = 0x2C6A5Cu;
    // 0x2c6a5c: 0x0  nop
    ctx->pc = 0x2c6a5cu;
    // NOP
label_2c6a60:
    // 0x2c6a60: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2c6a60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c6a64: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2C6A64u;
    {
        const bool branch_taken_0x2c6a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A64u;
        // 0x2c6a68: 0x240c0055  addiu       $t4, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6a64) {
            ctx->pc = 0x2C6B60u;
            goto label_2c6b60;
        }
    }
    ctx->pc = 0x2C6A6Cu;
    // 0x2c6a6c: 0x0  nop
    ctx->pc = 0x2c6a6cu;
    // NOP
label_2c6a70:
    // 0x2c6a70: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2c6a70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c6a74: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2C6A74u;
    {
        const bool branch_taken_0x2c6a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A74u;
        // 0x2c6a78: 0x240cfeac  addiu       $t4, $zero, -0x154 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966956));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6a74) {
            ctx->pc = 0x2C6B60u;
            goto label_2c6b60;
        }
    }
    ctx->pc = 0x2C6A7Cu;
    // 0x2c6a7c: 0x0  nop
    ctx->pc = 0x2c6a7cu;
    // NOP
label_2c6a80:
    // 0x2c6a80: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x2c6a80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c6a84: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2C6A84u;
    {
        const bool branch_taken_0x2c6a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A84u;
        // 0x2c6a88: 0x240c0155  addiu       $t4, $zero, 0x155 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 341));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6a84) {
            ctx->pc = 0x2C6B60u;
            goto label_2c6b60;
        }
    }
    ctx->pc = 0x2C6A8Cu;
    // 0x2c6a8c: 0x0  nop
    ctx->pc = 0x2c6a8cu;
    // NOP
label_2c6a90:
    // 0x2c6a90: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x2c6a90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c6a94: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2C6A94u;
    {
        const bool branch_taken_0x2c6a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A94u;
        // 0x2c6a98: 0x240cfaac  addiu       $t4, $zero, -0x554 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965932));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6a94) {
            ctx->pc = 0x2C6B60u;
            goto label_2c6b60;
        }
    }
    ctx->pc = 0x2C6A9Cu;
    // 0x2c6a9c: 0x0  nop
    ctx->pc = 0x2c6a9cu;
    // NOP
label_2c6aa0:
    // 0x2c6aa0: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x2c6aa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c6aa4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2C6AA4u;
    {
        const bool branch_taken_0x2c6aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6AA4u;
        // 0x2c6aa8: 0x240c0555  addiu       $t4, $zero, 0x555 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1365));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6aa4) {
            ctx->pc = 0x2C6B60u;
            goto label_2c6b60;
        }
    }
    ctx->pc = 0x2C6AACu;
    // 0x2c6aac: 0x0  nop
    ctx->pc = 0x2c6aacu;
    // NOP
label_2c6ab0:
    // 0x2c6ab0: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x2c6ab0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c6ab4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2C6AB4u;
    {
        const bool branch_taken_0x2c6ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6AB4u;
        // 0x2c6ab8: 0x240ceaac  addiu       $t4, $zero, -0x1554 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294961836));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6ab4) {
            ctx->pc = 0x2C6B60u;
            goto label_2c6b60;
        }
    }
    ctx->pc = 0x2C6ABCu;
    // 0x2c6abc: 0x0  nop
    ctx->pc = 0x2c6abcu;
    // NOP
label_2c6ac0:
    // 0x2c6ac0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x2c6ac0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c6ac4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2C6AC4u;
    {
        const bool branch_taken_0x2c6ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6AC4u;
        // 0x2c6ac8: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6ac4) {
            ctx->pc = 0x2C6B60u;
            goto label_2c6b60;
        }
    }
    ctx->pc = 0x2C6ACCu;
    // 0x2c6acc: 0x0  nop
    ctx->pc = 0x2c6accu;
    // NOP
label_2c6ad0:
    // 0x2c6ad0: 0x24090063  addiu       $t1, $zero, 0x63
    ctx->pc = 0x2c6ad0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2c6ad4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2C6AD4u;
    {
        const bool branch_taken_0x2c6ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6AD4u;
        // 0x2c6ad8: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6ad4) {
            ctx->pc = 0x2C6B60u;
            goto label_2c6b60;
        }
    }
    ctx->pc = 0x2C6ADCu;
    // 0x2c6adc: 0x0  nop
    ctx->pc = 0x2c6adcu;
    // NOP
label_2c6ae0:
    // 0x2c6ae0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2c6ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6ae4: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x2c6ae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c6ae8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C6AE8u;
    {
        const bool branch_taken_0x2c6ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6AE8u;
        // 0x2c6aec: 0x2562fffc  addiu       $v0, $t3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6ae8) {
            ctx->pc = 0x2C6B30u;
            goto label_2c6b30;
        }
    }
    ctx->pc = 0x2C6AF0u;
    // 0x2c6af0: 0xaf87bb10  sw          $a3, -0x44F0($gp)
    ctx->pc = 0x2c6af0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949648), GPR_U32(ctx, 7));
    // 0x2c6af4: 0x2787bb0c  addiu       $a3, $gp, -0x44F4
    ctx->pc = 0x2c6af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949644));
label_2c6af8:
    // 0x2c6af8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x2c6af8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x2c6afc: 0x8f83bb0c  lw          $v1, -0x44F4($gp)
    ctx->pc = 0x2c6afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949644)));
    // 0x2c6b00: 0xaf88cb14  sw          $t0, -0x34EC($gp)
    ctx->pc = 0x2c6b00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953748), GPR_U32(ctx, 8));
    // 0x2c6b04: 0x24cb0008  addiu       $t3, $a2, 0x8
    ctx->pc = 0x2c6b04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2c6b08: 0x29650004  slti        $a1, $t3, 0x4
    ctx->pc = 0x2c6b08u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c6b0c: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x2c6b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6b10: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2c6b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c6b14: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2c6b14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c6b18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c6b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c6b1c: 0xaf8bbb10  sw          $t3, -0x44F0($gp)
    ctx->pc = 0x2c6b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949648), GPR_U32(ctx, 11));
    // 0x2c6b20: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x2c6b20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x2c6b24: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C6B24u;
    {
        const bool branch_taken_0x2c6b24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6B24u;
        // 0x2c6b28: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6b24) {
            ctx->pc = 0x2C6AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6af8;
        }
    }
    ctx->pc = 0x2C6B2Cu;
    // 0x2c6b2c: 0x2562fffc  addiu       $v0, $t3, -0x4
    ctx->pc = 0x2c6b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
label_2c6b30:
    // 0x2c6b30: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c6b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c6b34: 0x482006  srlv        $a0, $t0, $v0
    ctx->pc = 0x2c6b34u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x2c6b38: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x2c6b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2c6b3c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2c6b3cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2c6b40: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2c6b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2c6b44: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x2c6b44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x2c6b48: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2c6b48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6b4c: 0xa784bb14  sh          $a0, -0x44EC($gp)
    ctx->pc = 0x2c6b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294949652), (uint16_t)GPR_U32(ctx, 4));
    // 0x2c6b50: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2c6b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6b54: 0x8f89cb0c  lw          $t1, -0x34F4($gp)
    ctx->pc = 0x2c6b54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953740)));
    // 0x2c6b58: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2c6b58u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6b5c: 0x8f8ccb10  lw          $t4, -0x34F0($gp)
    ctx->pc = 0x2c6b5cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953744)));
label_2c6b60:
    // 0x2c6b60: 0x11200022  beqz        $t1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C6B60u;
    {
        const bool branch_taken_0x2c6b60 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6B60u;
        // 0x2c6b64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6b60) {
            ctx->pc = 0x2C6BECu;
            goto label_2c6bec;
        }
    }
    ctx->pc = 0x2C6B68u;
    // 0x2c6b68: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x2c6b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2c6b6c: 0x1122001f  beq         $t1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C6B6Cu;
    {
        const bool branch_taken_0x2c6b6c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C6B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6B6Cu;
        // 0x2c6b70: 0x3c04f000  lui         $a0, 0xF000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6b6c) {
            ctx->pc = 0x2C6BECu;
            goto label_2c6bec;
        }
    }
    ctx->pc = 0x2C6B74u;
    // 0x2c6b74: 0x169102a  slt         $v0, $t3, $t1
    ctx->pc = 0x2c6b74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2c6b78: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C6B78u;
    {
        const bool branch_taken_0x2c6b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6B78u;
        // 0x2c6b7c: 0x160302d  daddu       $a2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6b78) {
            ctx->pc = 0x2C6BBCu;
            goto label_2c6bbc;
        }
    }
    ctx->pc = 0x2C6B80u;
    // 0x2c6b80: 0xaf87bb10  sw          $a3, -0x44F0($gp)
    ctx->pc = 0x2c6b80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949648), GPR_U32(ctx, 7));
    // 0x2c6b84: 0x2787bb0c  addiu       $a3, $gp, -0x44F4
    ctx->pc = 0x2c6b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949644));
label_2c6b88:
    // 0x2c6b88: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x2c6b88u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x2c6b8c: 0x8f83bb0c  lw          $v1, -0x44F4($gp)
    ctx->pc = 0x2c6b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949644)));
    // 0x2c6b90: 0xaf88cb14  sw          $t0, -0x34EC($gp)
    ctx->pc = 0x2c6b90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953748), GPR_U32(ctx, 8));
    // 0x2c6b94: 0x24cb0008  addiu       $t3, $a2, 0x8
    ctx->pc = 0x2c6b94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2c6b98: 0x169282a  slt         $a1, $t3, $t1
    ctx->pc = 0x2c6b98u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2c6b9c: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x2c6b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6ba0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2c6ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c6ba4: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2c6ba4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c6ba8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c6ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c6bac: 0xaf8bbb10  sw          $t3, -0x44F0($gp)
    ctx->pc = 0x2c6bacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949648), GPR_U32(ctx, 11));
    // 0x2c6bb0: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x2c6bb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x2c6bb4: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C6BB4u;
    {
        const bool branch_taken_0x2c6bb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6BB4u;
        // 0x2c6bb8: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6bb4) {
            ctx->pc = 0x2C6B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6b88;
        }
    }
    ctx->pc = 0x2C6BBCu;
label_2c6bbc:
    // 0x2c6bbc: 0x1691023  subu        $v0, $t3, $t1
    ctx->pc = 0x2c6bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x2c6bc0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c6bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c6bc4: 0x482006  srlv        $a0, $t0, $v0
    ctx->pc = 0x2c6bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x2c6bc8: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x2c6bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2c6bcc: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2c6bccu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2c6bd0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2c6bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2c6bd4: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x2c6bd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x2c6bd8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2c6bd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6bdc: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x2c6bdcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x2c6be0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2c6be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6be4: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x2c6be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x2c6be8: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2c6be8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c6bec:
    // 0x2c6bec: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2c6becu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c6bf0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c6bf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6bf4: 0xaf89cb0c  sw          $t1, -0x34F4($gp)
    ctx->pc = 0x2c6bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953740), GPR_U32(ctx, 9));
    // 0x2c6bf8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2c6bf8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6bfc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c6bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c6c00: 0xaf8ccb10  sw          $t4, -0x34F0($gp)
    ctx->pc = 0x2c6c00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953744), GPR_U32(ctx, 12));
    // 0x2c6c04: 0x12a000c0  beqz        $s5, . + 4 + (0xC0 << 2)
    ctx->pc = 0x2C6C04u;
    {
        const bool branch_taken_0x2c6c04 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6C04u;
        // 0x2c6c08: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6c04) {
            ctx->pc = 0x2C6F08u;
            goto label_2c6f08;
        }
    }
    ctx->pc = 0x2C6C0Cu;
    // 0x2c6c0c: 0x0  nop
    ctx->pc = 0x2c6c0cu;
    // NOP
label_2c6c10:
    // 0x2c6c10: 0x9782bb14  lhu         $v0, -0x44EC($gp)
    ctx->pc = 0x2c6c10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294949652)));
    // 0x2c6c14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c6c14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6c18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C6C18u;
    {
        const bool branch_taken_0x2c6c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6C18u;
        // 0x2c6c1c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6c18) {
            ctx->pc = 0x2C6C38u;
            goto label_2c6c38;
        }
    }
    ctx->pc = 0x2C6C20u;
    // 0x2c6c20: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x2c6c20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c6c24: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x2c6c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2c6c28: 0x8f89cb0c  lw          $t1, -0x34F4($gp)
    ctx->pc = 0x2c6c28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953740)));
    // 0x2c6c2c: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x2C6C2Cu;
    {
        const bool branch_taken_0x2c6c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6C2Cu;
        // 0x2c6c30: 0xa782bb14  sh          $v0, -0x44EC($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294949652), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6c2c) {
            ctx->pc = 0x2C6E3Cu;
            goto label_2c6e3c;
        }
    }
    ctx->pc = 0x2C6C34u;
    // 0x2c6c34: 0x0  nop
    ctx->pc = 0x2c6c34u;
    // NOP
label_2c6c38:
    // 0x2c6c38: 0x29620004  slti        $v0, $t3, 0x4
    ctx->pc = 0x2c6c38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c6c3c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C6C3Cu;
    {
        const bool branch_taken_0x2c6c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6C3Cu;
        // 0x2c6c40: 0x160302d  daddu       $a2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6c3c) {
            ctx->pc = 0x2C6C84u;
            goto label_2c6c84;
        }
    }
    ctx->pc = 0x2C6C44u;
    // 0x2c6c44: 0xaf87bb10  sw          $a3, -0x44F0($gp)
    ctx->pc = 0x2c6c44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949648), GPR_U32(ctx, 7));
    // 0x2c6c48: 0x2787bb0c  addiu       $a3, $gp, -0x44F4
    ctx->pc = 0x2c6c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949644));
    // 0x2c6c4c: 0x0  nop
    ctx->pc = 0x2c6c4cu;
    // NOP
label_2c6c50:
    // 0x2c6c50: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x2c6c50u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x2c6c54: 0x8f83bb0c  lw          $v1, -0x44F4($gp)
    ctx->pc = 0x2c6c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949644)));
    // 0x2c6c58: 0xaf88cb14  sw          $t0, -0x34EC($gp)
    ctx->pc = 0x2c6c58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953748), GPR_U32(ctx, 8));
    // 0x2c6c5c: 0x24cb0008  addiu       $t3, $a2, 0x8
    ctx->pc = 0x2c6c5cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2c6c60: 0x29650004  slti        $a1, $t3, 0x4
    ctx->pc = 0x2c6c60u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c6c64: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x2c6c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6c68: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2c6c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c6c6c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2c6c6cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c6c70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c6c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c6c74: 0xaf8bbb10  sw          $t3, -0x44F0($gp)
    ctx->pc = 0x2c6c74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949648), GPR_U32(ctx, 11));
    // 0x2c6c78: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x2c6c78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x2c6c7c: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C6C7Cu;
    {
        const bool branch_taken_0x2c6c7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6C7Cu;
        // 0x2c6c80: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6c7c) {
            ctx->pc = 0x2C6C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6c50;
        }
    }
    ctx->pc = 0x2C6C84u;
label_2c6c84:
    // 0x2c6c84: 0x2564fffc  addiu       $a0, $t3, -0x4
    ctx->pc = 0x2c6c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x2c6c88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c6c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c6c8c: 0x881806  srlv        $v1, $t0, $a0
    ctx->pc = 0x2c6c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c6c90: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x2c6c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c6c94: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2c6c94u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2c6c98: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2c6c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2c6c9c: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x2c6c9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2c6ca0: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x2c6ca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2c6ca4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2c6ca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6ca8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2c6ca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6cac: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2C6CACu;
    {
        const bool branch_taken_0x2c6cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6CACu;
        // 0x2c6cb0: 0xe0582d  daddu       $t3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6cac) {
            ctx->pc = 0x2C6E40u;
            goto label_2c6e40;
        }
    }
    ctx->pc = 0x2C6CB4u;
    // 0x2c6cb4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c6cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c6cb8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2c6cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2c6cbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c6cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c6cc0: 0x8c63e2e0  lw          $v1, -0x1D20($v1)
    ctx->pc = 0x2c6cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959840)));
    // 0x2c6cc4: 0x600008  jr          $v1
    ctx->pc = 0x2C6CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C6CD0u: goto label_2c6cd0;
            case 0x2C6CE0u: goto label_2c6ce0;
            case 0x2C6CF0u: goto label_2c6cf0;
            case 0x2C6D00u: goto label_2c6d00;
            case 0x2C6D10u: goto label_2c6d10;
            case 0x2C6D20u: goto label_2c6d20;
            case 0x2C6D30u: goto label_2c6d30;
            case 0x2C6D40u: goto label_2c6d40;
            case 0x2C6D50u: goto label_2c6d50;
            case 0x2C6D60u: goto label_2c6d60;
            case 0x2C6D70u: goto label_2c6d70;
            case 0x2C6D80u: goto label_2c6d80;
            case 0x2C6D90u: goto label_2c6d90;
            case 0x2C6DA0u: goto label_2c6da0;
            case 0x2C6DB0u: goto label_2c6db0;
            case 0x2C6DC0u: goto label_2c6dc0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6CC4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C6CCCu;
    // 0x2c6ccc: 0x0  nop
    ctx->pc = 0x2c6cccu;
    // NOP
label_2c6cd0:
    // 0x2c6cd0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c6cd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6cd4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2C6CD4u;
    {
        const bool branch_taken_0x2c6cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6CD4u;
        // 0x2c6cd8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6cd4) {
            ctx->pc = 0x2C6E40u;
            goto label_2c6e40;
        }
    }
    ctx->pc = 0x2C6CDCu;
    // 0x2c6cdc: 0x0  nop
    ctx->pc = 0x2c6cdcu;
    // NOP
label_2c6ce0:
    // 0x2c6ce0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2c6ce0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c6ce4: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2C6CE4u;
    {
        const bool branch_taken_0x2c6ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6CE4u;
        // 0x2c6ce8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6ce4) {
            ctx->pc = 0x2C6E40u;
            goto label_2c6e40;
        }
    }
    ctx->pc = 0x2C6CECu;
    // 0x2c6cec: 0x0  nop
    ctx->pc = 0x2c6cecu;
    // NOP
label_2c6cf0:
    // 0x2c6cf0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2c6cf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c6cf4: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2C6CF4u;
    {
        const bool branch_taken_0x2c6cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6CF4u;
        // 0x2c6cf8: 0x240afffc  addiu       $t2, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6cf4) {
            ctx->pc = 0x2C6E40u;
            goto label_2c6e40;
        }
    }
    ctx->pc = 0x2C6CFCu;
    // 0x2c6cfc: 0x0  nop
    ctx->pc = 0x2c6cfcu;
    // NOP
label_2c6d00:
    // 0x2c6d00: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2c6d00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c6d04: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2C6D04u;
    {
        const bool branch_taken_0x2c6d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6D04u;
        // 0x2c6d08: 0x240a0005  addiu       $t2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6d04) {
            ctx->pc = 0x2C6E40u;
            goto label_2c6e40;
        }
    }
    ctx->pc = 0x2C6D0Cu;
    // 0x2c6d0c: 0x0  nop
    ctx->pc = 0x2c6d0cu;
    // NOP
label_2c6d10:
    // 0x2c6d10: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2c6d10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c6d14: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2C6D14u;
    {
        const bool branch_taken_0x2c6d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6D14u;
        // 0x2c6d18: 0x240affec  addiu       $t2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6d14) {
            ctx->pc = 0x2C6E40u;
            goto label_2c6e40;
        }
    }
    ctx->pc = 0x2C6D1Cu;
    // 0x2c6d1c: 0x0  nop
    ctx->pc = 0x2c6d1cu;
    // NOP
label_2c6d20:
    // 0x2c6d20: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x2c6d20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c6d24: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2C6D24u;
    {
        const bool branch_taken_0x2c6d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6D24u;
        // 0x2c6d28: 0x240a0015  addiu       $t2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6d24) {
            ctx->pc = 0x2C6E40u;
            goto label_2c6e40;
        }
    }
    ctx->pc = 0x2C6D2Cu;
    // 0x2c6d2c: 0x0  nop
    ctx->pc = 0x2c6d2cu;
    // NOP
label_2c6d30:
    // 0x2c6d30: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x2c6d30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c6d34: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2C6D34u;
    {
        const bool branch_taken_0x2c6d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6D34u;
        // 0x2c6d38: 0x240affac  addiu       $t2, $zero, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6d34) {
            ctx->pc = 0x2C6E40u;
            goto label_2c6e40;
        }
    }
    ctx->pc = 0x2C6D3Cu;
    // 0x2c6d3c: 0x0  nop
    ctx->pc = 0x2c6d3cu;
    // NOP
label_2c6d40:
    // 0x2c6d40: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2c6d40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c6d44: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2C6D44u;
    {
        const bool branch_taken_0x2c6d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6D44u;
        // 0x2c6d48: 0x240a0055  addiu       $t2, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6d44) {
            ctx->pc = 0x2C6E40u;
            goto label_2c6e40;
        }
    }
    ctx->pc = 0x2C6D4Cu;
    // 0x2c6d4c: 0x0  nop
    ctx->pc = 0x2c6d4cu;
    // NOP
label_2c6d50:
    // 0x2c6d50: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2c6d50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c6d54: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2C6D54u;
    {
        const bool branch_taken_0x2c6d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6D54u;
        // 0x2c6d58: 0x240afeac  addiu       $t2, $zero, -0x154 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966956));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6d54) {
            ctx->pc = 0x2C6E40u;
            goto label_2c6e40;
        }
    }
    ctx->pc = 0x2C6D5Cu;
    // 0x2c6d5c: 0x0  nop
    ctx->pc = 0x2c6d5cu;
    // NOP
label_2c6d60:
    // 0x2c6d60: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x2c6d60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c6d64: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2C6D64u;
    {
        const bool branch_taken_0x2c6d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6D64u;
        // 0x2c6d68: 0x240a0155  addiu       $t2, $zero, 0x155 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 341));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6d64) {
            ctx->pc = 0x2C6E40u;
            goto label_2c6e40;
        }
    }
    ctx->pc = 0x2C6D6Cu;
    // 0x2c6d6c: 0x0  nop
    ctx->pc = 0x2c6d6cu;
    // NOP
label_2c6d70:
    // 0x2c6d70: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x2c6d70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c6d74: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2C6D74u;
    {
        const bool branch_taken_0x2c6d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6D74u;
        // 0x2c6d78: 0x240afaac  addiu       $t2, $zero, -0x554 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965932));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6d74) {
            ctx->pc = 0x2C6E40u;
            goto label_2c6e40;
        }
    }
    ctx->pc = 0x2C6D7Cu;
    // 0x2c6d7c: 0x0  nop
    ctx->pc = 0x2c6d7cu;
    // NOP
label_2c6d80:
    // 0x2c6d80: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x2c6d80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c6d84: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2C6D84u;
    {
        const bool branch_taken_0x2c6d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6D84u;
        // 0x2c6d88: 0x240a0555  addiu       $t2, $zero, 0x555 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1365));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6d84) {
            ctx->pc = 0x2C6E40u;
            goto label_2c6e40;
        }
    }
    ctx->pc = 0x2C6D8Cu;
    // 0x2c6d8c: 0x0  nop
    ctx->pc = 0x2c6d8cu;
    // NOP
label_2c6d90:
    // 0x2c6d90: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x2c6d90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c6d94: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2C6D94u;
    {
        const bool branch_taken_0x2c6d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6D94u;
        // 0x2c6d98: 0x240aeaac  addiu       $t2, $zero, -0x1554 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294961836));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6d94) {
            ctx->pc = 0x2C6E40u;
            goto label_2c6e40;
        }
    }
    ctx->pc = 0x2C6D9Cu;
    // 0x2c6d9c: 0x0  nop
    ctx->pc = 0x2c6d9cu;
    // NOP
label_2c6da0:
    // 0x2c6da0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x2c6da0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c6da4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2C6DA4u;
    {
        const bool branch_taken_0x2c6da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6DA4u;
        // 0x2c6da8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6da4) {
            ctx->pc = 0x2C6E40u;
            goto label_2c6e40;
        }
    }
    ctx->pc = 0x2C6DACu;
    // 0x2c6dac: 0x0  nop
    ctx->pc = 0x2c6dacu;
    // NOP
label_2c6db0:
    // 0x2c6db0: 0x24090063  addiu       $t1, $zero, 0x63
    ctx->pc = 0x2c6db0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2c6db4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2C6DB4u;
    {
        const bool branch_taken_0x2c6db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6DB4u;
        // 0x2c6db8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6db4) {
            ctx->pc = 0x2C6E40u;
            goto label_2c6e40;
        }
    }
    ctx->pc = 0x2C6DBCu;
    // 0x2c6dbc: 0x0  nop
    ctx->pc = 0x2c6dbcu;
    // NOP
label_2c6dc0:
    // 0x2c6dc0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2c6dc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6dc4: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x2c6dc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c6dc8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C6DC8u;
    {
        const bool branch_taken_0x2c6dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6DC8u;
        // 0x2c6dcc: 0x2564fffc  addiu       $a0, $t3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6dc8) {
            ctx->pc = 0x2C6E10u;
            goto label_2c6e10;
        }
    }
    ctx->pc = 0x2C6DD0u;
    // 0x2c6dd0: 0xaf87bb10  sw          $a3, -0x44F0($gp)
    ctx->pc = 0x2c6dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949648), GPR_U32(ctx, 7));
    // 0x2c6dd4: 0x2787bb0c  addiu       $a3, $gp, -0x44F4
    ctx->pc = 0x2c6dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949644));
label_2c6dd8:
    // 0x2c6dd8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x2c6dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x2c6ddc: 0x8f83bb0c  lw          $v1, -0x44F4($gp)
    ctx->pc = 0x2c6ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949644)));
    // 0x2c6de0: 0xaf88cb14  sw          $t0, -0x34EC($gp)
    ctx->pc = 0x2c6de0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953748), GPR_U32(ctx, 8));
    // 0x2c6de4: 0x24cb0008  addiu       $t3, $a2, 0x8
    ctx->pc = 0x2c6de4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2c6de8: 0x29650004  slti        $a1, $t3, 0x4
    ctx->pc = 0x2c6de8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c6dec: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x2c6decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6df0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2c6df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c6df4: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2c6df4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c6df8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c6df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c6dfc: 0xaf8bbb10  sw          $t3, -0x44F0($gp)
    ctx->pc = 0x2c6dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949648), GPR_U32(ctx, 11));
    // 0x2c6e00: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x2c6e00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x2c6e04: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C6E04u;
    {
        const bool branch_taken_0x2c6e04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6E04u;
        // 0x2c6e08: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6e04) {
            ctx->pc = 0x2C6DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6dd8;
        }
    }
    ctx->pc = 0x2C6E0Cu;
    // 0x2c6e0c: 0x2564fffc  addiu       $a0, $t3, -0x4
    ctx->pc = 0x2c6e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
label_2c6e10:
    // 0x2c6e10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c6e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c6e14: 0x881006  srlv        $v0, $t0, $a0
    ctx->pc = 0x2c6e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c6e18: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x2c6e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c6e1c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2c6e1cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2c6e20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c6e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c6e24: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x2c6e24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x2c6e28: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2c6e28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6e2c: 0xa782bb14  sh          $v0, -0x44EC($gp)
    ctx->pc = 0x2c6e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294949652), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c6e30: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2c6e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6e34: 0x8f89cb0c  lw          $t1, -0x34F4($gp)
    ctx->pc = 0x2c6e34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953740)));
    // 0x2c6e38: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2c6e38u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c6e3c:
    // 0x2c6e3c: 0x8f8acb10  lw          $t2, -0x34F0($gp)
    ctx->pc = 0x2c6e3cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953744)));
label_2c6e40:
    // 0x2c6e40: 0x11200022  beqz        $t1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C6E40u;
    {
        const bool branch_taken_0x2c6e40 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6E40u;
        // 0x2c6e44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6e40) {
            ctx->pc = 0x2C6ECCu;
            goto label_2c6ecc;
        }
    }
    ctx->pc = 0x2C6E48u;
    // 0x2c6e48: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x2c6e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2c6e4c: 0x1122001f  beq         $t1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C6E4Cu;
    {
        const bool branch_taken_0x2c6e4c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C6E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6E4Cu;
        // 0x2c6e50: 0x3c04f000  lui         $a0, 0xF000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6e4c) {
            ctx->pc = 0x2C6ECCu;
            goto label_2c6ecc;
        }
    }
    ctx->pc = 0x2C6E54u;
    // 0x2c6e54: 0x169102a  slt         $v0, $t3, $t1
    ctx->pc = 0x2c6e54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2c6e58: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C6E58u;
    {
        const bool branch_taken_0x2c6e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6E58u;
        // 0x2c6e5c: 0x160302d  daddu       $a2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6e58) {
            ctx->pc = 0x2C6E9Cu;
            goto label_2c6e9c;
        }
    }
    ctx->pc = 0x2C6E60u;
    // 0x2c6e60: 0xaf87bb10  sw          $a3, -0x44F0($gp)
    ctx->pc = 0x2c6e60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949648), GPR_U32(ctx, 7));
    // 0x2c6e64: 0x2787bb0c  addiu       $a3, $gp, -0x44F4
    ctx->pc = 0x2c6e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949644));
label_2c6e68:
    // 0x2c6e68: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x2c6e68u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x2c6e6c: 0x8f83bb0c  lw          $v1, -0x44F4($gp)
    ctx->pc = 0x2c6e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949644)));
    // 0x2c6e70: 0xaf88cb14  sw          $t0, -0x34EC($gp)
    ctx->pc = 0x2c6e70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953748), GPR_U32(ctx, 8));
    // 0x2c6e74: 0x24cb0008  addiu       $t3, $a2, 0x8
    ctx->pc = 0x2c6e74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2c6e78: 0x169282a  slt         $a1, $t3, $t1
    ctx->pc = 0x2c6e78u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2c6e7c: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x2c6e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6e80: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2c6e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c6e84: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2c6e84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c6e88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c6e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c6e8c: 0xaf8bbb10  sw          $t3, -0x44F0($gp)
    ctx->pc = 0x2c6e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949648), GPR_U32(ctx, 11));
    // 0x2c6e90: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x2c6e90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x2c6e94: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C6E94u;
    {
        const bool branch_taken_0x2c6e94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6E94u;
        // 0x2c6e98: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6e94) {
            ctx->pc = 0x2C6E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6e68;
        }
    }
    ctx->pc = 0x2C6E9Cu;
label_2c6e9c:
    // 0x2c6e9c: 0x1691023  subu        $v0, $t3, $t1
    ctx->pc = 0x2c6e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x2c6ea0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c6ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c6ea4: 0x482006  srlv        $a0, $t0, $v0
    ctx->pc = 0x2c6ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x2c6ea8: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x2c6ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2c6eac: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2c6eacu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2c6eb0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2c6eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2c6eb4: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x2c6eb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x2c6eb8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2c6eb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6ebc: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x2c6ebcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x2c6ec0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2c6ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6ec4: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x2c6ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x2c6ec8: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2c6ec8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c6ecc:
    // 0x2c6ecc: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x2c6eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x2c6ed0: 0xaf89cb0c  sw          $t1, -0x34F4($gp)
    ctx->pc = 0x2c6ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953740), GPR_U32(ctx, 9));
    // 0x2c6ed4: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C6ED4u;
    {
        const bool branch_taken_0x2c6ed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C6ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6ED4u;
        // 0x2c6ed8: 0xaf8acb10  sw          $t2, -0x34F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953744), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6ed4) {
            ctx->pc = 0x2C6F08u;
            goto label_2c6f08;
        }
    }
    ctx->pc = 0x2C6EDCu;
    // 0x2c6edc: 0x26f1021  addu        $v0, $s3, $t7
    ctx->pc = 0x2c6edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x2c6ee0: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x2c6ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2c6ee4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2c6ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2c6ee8: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x2c6ee8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x2c6eec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2c6eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2c6ef0: 0x1b5202a  slt         $a0, $t5, $s5
    ctx->pc = 0x2c6ef0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2c6ef4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2c6ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2c6ef8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2c6ef8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c6efc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2c6efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2c6f00: 0x1480ff43  bnez        $a0, . + 4 + (-0xBD << 2)
    ctx->pc = 0x2C6F00u;
    {
        const bool branch_taken_0x2c6f00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6F00u;
        // 0x2c6f04: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6f00) {
            ctx->pc = 0x2C6C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6c10;
        }
    }
    ctx->pc = 0x2C6F08u;
label_2c6f08:
    // 0x2c6f08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6f0c: 0xaf87bb10  sw          $a3, -0x44F0($gp)
    ctx->pc = 0x2c6f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949648), GPR_U32(ctx, 7));
    // 0x2c6f10: 0x1e21004  sllv        $v0, $v0, $t7
    ctx->pc = 0x2c6f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x2c6f14: 0x2e21024  and         $v0, $s7, $v0
    ctx->pc = 0x2c6f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
    // 0x2c6f18: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C6F18u;
    {
        const bool branch_taken_0x2c6f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6F18u;
        // 0x2c6f1c: 0xaf86cb14  sw          $a2, -0x34EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953748), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6f18) {
            ctx->pc = 0x2C6F58u;
            goto label_2c6f58;
        }
    }
    ctx->pc = 0x2C6F20u;
    // 0x2c6f20: 0x26f1821  addu        $v1, $s3, $t7
    ctx->pc = 0x2c6f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x2c6f24: 0xc7819348  lwc1        $f1, -0x6CB8($gp)
    ctx->pc = 0x2c6f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6f28: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2c6f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2c6f2c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x2c6f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c6f30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c6f30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c6f34: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x2c6f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2c6f38: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x2c6f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x2c6f3c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x2c6f3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c6f40: 0x2c21004  sllv        $v0, $v0, $s6
    ctx->pc = 0x2c6f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 22) & 0x1F));
    // 0x2c6f44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6f48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c6f48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c6f4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c6f4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6f50: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2C6F50u;
    {
        const bool branch_taken_0x2c6f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6F50u;
        // 0x2c6f54: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6f50) {
            ctx->pc = 0x2C6FA0u;
            goto label_2c6fa0;
        }
    }
    ctx->pc = 0x2C6F58u;
label_2c6f58:
    // 0x2c6f58: 0x26f2021  addu        $a0, $s3, $t7
    ctx->pc = 0x2c6f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x2c6f5c: 0x181880  sll         $v1, $t8, 2
    ctx->pc = 0x2c6f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x2c6f60: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x2c6f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2c6f64: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x2c6f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2c6f68: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2c6f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2c6f6c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2c6f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c6f70: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2c6f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2c6f74: 0x8fa70148  lw          $a3, 0x148($sp)
    ctx->pc = 0x2c6f74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2c6f78: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2c6f78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c6f7c: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x2c6f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x2c6f80: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2c6f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6f84: 0xe31804  sllv        $v1, $v1, $a3
    ctx->pc = 0x2c6f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x2c6f88: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2c6f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6f8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c6f8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6f90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c6f90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c6f94: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2c6f94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c6f98: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c6f98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c6f9c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2c6f9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2c6fa0:
    // 0x2c6fa0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2c6fa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2c6fa4: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x2c6fa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c6fa8: 0x1440fe47  bnez        $v0, . + 4 + (-0x1B9 << 2)
    ctx->pc = 0x2C6FA8u;
    {
        const bool branch_taken_0x2c6fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6FA8u;
        // 0x2c6fac: 0x1d97021  addu        $t6, $t6, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6fa8) {
            ctx->pc = 0x2C68C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c68c8;
        }
    }
    ctx->pc = 0x2C6FB0u;
    // 0x2c6fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6fb4: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x2c6fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2c6fb8: 0x1e21004  sllv        $v0, $v0, $t7
    ctx->pc = 0x2c6fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x2c6fbc: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2c6fbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2c6fc0: 0x27040001  addiu       $a0, $t8, 0x1
    ctx->pc = 0x2c6fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x2c6fc4: 0x2e21024  and         $v0, $s7, $v0
    ctx->pc = 0x2c6fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
    // 0x2c6fc8: 0x1e5182a  slt         $v1, $t7, $a1
    ctx->pc = 0x2c6fc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2c6fcc: 0x1460fe3c  bnez        $v1, . + 4 + (-0x1C4 << 2)
    ctx->pc = 0x2C6FCCu;
    {
        const bool branch_taken_0x2c6fcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6FCCu;
        // 0x2c6fd0: 0x82c00a  movz        $t8, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6fcc) {
            ctx->pc = 0x2C68C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c68c0;
        }
    }
    ctx->pc = 0x2C6FD4u;
label_2c6fd4:
    // 0x2c6fd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c6fd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6fd8:
    // 0x2c6fd8: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x2c6fd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2c6fdc: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x2c6fdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2c6fe0: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x2c6fe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2c6fe4: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x2c6fe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2c6fe8: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x2c6fe8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2c6fec: 0xdfb50178  ld          $s5, 0x178($sp)
    ctx->pc = 0x2c6fecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2c6ff0: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x2c6ff0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2c6ff4: 0xdfb70188  ld          $s7, 0x188($sp)
    ctx->pc = 0x2c6ff4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x2c6ff8: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x2c6ff8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2c6ffc: 0xdfbf0198  ld          $ra, 0x198($sp)
    ctx->pc = 0x2c6ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2c7000: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7000u;
        // 0x2c7004: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7008u;
    // 0x2c7008: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x2c7008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x2c700c: 0xffb001c0  sd          $s0, 0x1C0($sp)
    ctx->pc = 0x2c700cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 16));
    // 0x2c7010: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c7010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7014: 0xffb501e8  sd          $s5, 0x1E8($sp)
    ctx->pc = 0x2c7014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 21));
    // 0x2c7018: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c7018u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c701c: 0xffb101c8  sd          $s1, 0x1C8($sp)
    ctx->pc = 0x2c701cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 17));
    // 0x2c7020: 0xffb201d0  sd          $s2, 0x1D0($sp)
    ctx->pc = 0x2c7020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 18));
    // 0x2c7024: 0xffb301d8  sd          $s3, 0x1D8($sp)
    ctx->pc = 0x2c7024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 19));
    // 0x2c7028: 0xffb401e0  sd          $s4, 0x1E0($sp)
    ctx->pc = 0x2c7028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 20));
    // 0x2c702c: 0xffb601f0  sd          $s6, 0x1F0($sp)
    ctx->pc = 0x2c702cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 22));
    // 0x2c7030: 0xffbf01f8  sd          $ra, 0x1F8($sp)
    ctx->pc = 0x2c7030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 31));
    // 0x2c7034: 0xe7b50208  swc1        $f21, 0x208($sp)
    ctx->pc = 0x2c7034u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x2c7038: 0xe7b40200  swc1        $f20, 0x200($sp)
    ctx->pc = 0x2c7038u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x2c703c: 0x94930002  lhu         $s3, 0x2($a0)
    ctx->pc = 0x2c703cu;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2c7040: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2c7040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2c7044: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2c7044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2c7048: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2c7048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c704c: 0x1a600013  blez        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C704Cu;
    {
        const bool branch_taken_0x2c704c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2C7050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C704Cu;
        // 0x2c7050: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c704c) {
            ctx->pc = 0x2C709Cu;
            goto label_2c709c;
        }
    }
    ctx->pc = 0x2C7054u;
    // 0x2c7054: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c7054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7058: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x2c7058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2c705c: 0x0  nop
    ctx->pc = 0x2c705cu;
    // NOP
label_2c7060:
    // 0x2c7060: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c7060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c7064: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2c7064u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c7068: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x2c7068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c706c: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x2c706cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2c7070: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7070u;
    {
        const bool branch_taken_0x2c7070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7070u;
        // 0x2c7074: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7070) {
            ctx->pc = 0x2C7084u;
            goto label_2c7084;
        }
    }
    ctx->pc = 0x2C7078u;
    // 0x2c7078: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C7078u;
    {
        const bool branch_taken_0x2c7078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7078u;
        // 0x2c707c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7078) {
            ctx->pc = 0x2C7084u;
            goto label_2c7084;
        }
    }
    ctx->pc = 0x2C7080u;
    // 0x2c7080: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c7080u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7084:
    // 0x2c7084: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C7084u;
    {
        const bool branch_taken_0x2c7084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7084u;
        // 0x2c7088: 0xc71004  sllv        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7084) {
            ctx->pc = 0x2C7090u;
            goto label_2c7090;
        }
    }
    ctx->pc = 0x2C708Cu;
    // 0x2c708c: 0x2a2a825  or          $s5, $s5, $v0
    ctx->pc = 0x2c708cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
label_2c7090:
    // 0x2c7090: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2c7090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2c7094: 0x1cc0fff2  bgtz        $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x2C7094u;
    {
        const bool branch_taken_0x2c7094 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x2C7098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7094u;
        // 0x2c7098: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7094) {
            ctx->pc = 0x2C7060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7060;
        }
    }
    ctx->pc = 0x2C709Cu;
label_2c709c:
    // 0x2c709c: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c709cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2c70a0: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2c70a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2c70a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c70a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c70a8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2c70a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c70ac: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2c70acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c70b0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2c70b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c70b4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2c70b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c70b8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2c70b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c70bc: 0xc0b19a0  jal         func_2C6680
    ctx->pc = 0x2C70BCu;
    SET_GPR_U32(ctx, 31, 0x2C70C4u);
    ctx->pc = 0x2C70C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C70BCu;
    // 0x2c70c0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6680u;
    goto label_2c6680;
    ctx->pc = 0x2C70C4u;
label_2c70c4:
    // 0x2c70c4: 0x1260008d  beqz        $s3, . + 4 + (0x8D << 2)
    ctx->pc = 0x2C70C4u;
    {
        const bool branch_taken_0x2c70c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C70C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C70C4u;
        // 0x2c70c8: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c70c4) {
            ctx->pc = 0x2C72FCu;
            goto label_2c72fc;
        }
    }
    ctx->pc = 0x2C70CCu;
    // 0x2c70cc: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2c70ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2c70d0: 0x27b601a0  addiu       $s6, $sp, 0x1A0
    ctx->pc = 0x2c70d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2c70d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c70d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c70d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2c70d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c70dc: 0x0  nop
    ctx->pc = 0x2c70dcu;
    // NOP
label_2c70e0:
    // 0x2c70e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c70e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c70e4: 0x2821004  sllv        $v0, $v0, $s4
    ctx->pc = 0x2c70e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x2c70e8: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x2c70e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x2c70ec: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x2C70ECu;
    {
        const bool branch_taken_0x2c70ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C70F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C70ECu;
        // 0x2c70f0: 0xc6400000  lwc1        $f0, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c70ec) {
            ctx->pc = 0x2C72D0u;
            goto label_2c72d0;
        }
    }
    ctx->pc = 0x2C70F4u;
    // 0x2c70f4: 0xc781934c  lwc1        $f1, -0x6CB4($gp)
    ctx->pc = 0x2c70f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c70f8: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2c70f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c70fc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C70FCu;
    {
        const bool branch_taken_0x2c70fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C7100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C70FCu;
        // 0x2c7100: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c70fc) {
            ctx->pc = 0x2C7110u;
            goto label_2c7110;
        }
    }
    ctx->pc = 0x2C7104u;
    // 0x2c7104: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c7104u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c7108: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7108u;
    {
        const bool branch_taken_0x2c7108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7108u;
        // 0x2c710c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7108) {
            ctx->pc = 0x2C7118u;
            goto label_2c7118;
        }
    }
    ctx->pc = 0x2C7110u;
label_2c7110:
    // 0x2c7110: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c7110u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c7114: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c7114u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7118:
    // 0x2c7118: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2c7118u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2c711c: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2c711cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2c7120: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c7120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c7124: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2c7124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2c7128: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2c7128u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2c712c: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2c712cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2c7130: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2c7130u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7134: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2c7134u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2c7138: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2c7138u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c713c: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2c713cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7140: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2c7140u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7144: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2c7144u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7148: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2c7148u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c714c: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2c714cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7150: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2c7150u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7154: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2c7154u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7158: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2c7158u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c715c: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2c715cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2c7160: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2c7160u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7164: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7164u;
    {
        const bool branch_taken_0x2c7164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7164u;
        // 0x2c7168: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7164) {
            ctx->pc = 0x2C7178u;
            goto label_2c7178;
        }
    }
    ctx->pc = 0x2C716Cu;
    // 0x2c716c: 0x4a0003bf  vwaitq
    ctx->pc = 0x2c716cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2c7170: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7170u;
    {
        const bool branch_taken_0x2c7170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7170u;
        // 0x2c7174: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7170) {
            ctx->pc = 0x2C7180u;
            goto label_2c7180;
        }
    }
    ctx->pc = 0x2C7178u;
label_2c7178:
    // 0x2c7178: 0x4a0003bf  vwaitq
    ctx->pc = 0x2c7178u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2c717c: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2c717cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2c7180:
    // 0x2c7180: 0x4ae0012c  vsub.yzw    $vf4, $vf0, $vf0
    ctx->pc = 0x2c7180u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2c7184: 0x4b20016c  vsub.xw     $vf5, $vf0, $vf0
    ctx->pc = 0x2c7184u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2c7188: 0x4b2001ac  vsub.xw     $vf6, $vf0, $vf0
    ctx->pc = 0x2c7188u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2c718c: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x2c718cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2c7190: 0x4a9c0168  vadd.y      $vf5, $vf0, $vf28
    ctx->pc = 0x2c7190u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2c7194: 0x4a9c0184  vsubx.y     $vf6, $vf0, $vf28x
    ctx->pc = 0x2c7194u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2c7198: 0x4a5c0140  vaddx.z     $vf5, $vf0, $vf28x
    ctx->pc = 0x2c7198u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2c719c: 0x4a5c0181  vaddy.z     $vf6, $vf0, $vf28y
    ctx->pc = 0x2c719cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2c71a0: 0xf8800030  sqc2        $vf0, 0x30($a0)
    ctx->pc = 0x2c71a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2c71a4: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2c71a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c71a8: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x2c71a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2c71ac: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x2c71acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2c71b0: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2c71b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c71b4: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2c71b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c71b8: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x2c71b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c71bc: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x2c71bcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2c71c0: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x2c71c0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2c71c4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2c71c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c71c8: 0xc7819350  lwc1        $f1, -0x6CB0($gp)
    ctx->pc = 0x2c71c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c71cc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2C71CCu;
    {
        const bool branch_taken_0x2c71cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c71cc) {
            ctx->pc = 0x2C71D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C71CCu;
            // 0x2c71d0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C71E0u;
            goto label_2c71e0;
        }
    }
    ctx->pc = 0x2C71D4u;
    // 0x2c71d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c71d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c71d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C71D8u;
    {
        const bool branch_taken_0x2c71d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C71DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C71D8u;
        // 0x2c71dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c71d8) {
            ctx->pc = 0x2C71E4u;
            goto label_2c71e4;
        }
    }
    ctx->pc = 0x2C71E0u;
label_2c71e0:
    // 0x2c71e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c71e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c71e4:
    // 0x2c71e4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2c71e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2c71e8: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2c71e8u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2c71ec: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c71ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c71f0: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2c71f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2c71f4: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2c71f4u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2c71f8: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2c71f8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2c71fc: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2c71fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7200: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2c7200u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2c7204: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2c7204u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7208: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2c7208u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c720c: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2c720cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7210: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2c7210u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7214: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2c7214u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7218: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2c7218u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c721c: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2c721cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7220: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2c7220u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7224: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2c7224u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7228: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2c7228u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2c722c: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2c722cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7230: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7230u;
    {
        const bool branch_taken_0x2c7230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7230u;
        // 0x2c7234: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7230) {
            ctx->pc = 0x2C7248u;
            goto label_2c7248;
        }
    }
    ctx->pc = 0x2C7238u;
    // 0x2c7238: 0x4a0003bf  vwaitq
    ctx->pc = 0x2c7238u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2c723c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C723Cu;
    {
        const bool branch_taken_0x2c723c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C723Cu;
        // 0x2c7240: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c723c) {
            ctx->pc = 0x2C7250u;
            goto label_2c7250;
        }
    }
    ctx->pc = 0x2C7244u;
    // 0x2c7244: 0x0  nop
    ctx->pc = 0x2c7244u;
    // NOP
label_2c7248:
    // 0x2c7248: 0x4a0003bf  vwaitq
    ctx->pc = 0x2c7248u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2c724c: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2c724cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2c7250:
    // 0x2c7250: 0x4a5c0701  vaddy.z     $vf28, $vf0, $vf28y
    ctx->pc = 0x2c7250u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2c7254: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x2c7254u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c7258: 0x4a5c0744  vsubx.z     $vf29, $vf0, $vf28x
    ctx->pc = 0x2c7258u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2c725c: 0x4b44e1be  vmulaz.xz   $ACC, $vf28, $vf4z
    ctx->pc = 0x2c725cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2c7260: 0x4b44e908  vmaddx.xz   $vf4, $vf29, $vf4x
    ctx->pc = 0x2c7260u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2c7264: 0x4b45e1be  vmulaz.xz   $ACC, $vf28, $vf5z
    ctx->pc = 0x2c7264u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2c7268: 0x4b45e948  vmaddx.xz   $vf5, $vf29, $vf5x
    ctx->pc = 0x2c7268u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2c726c: 0x4b46e1be  vmulaz.xz   $ACC, $vf28, $vf6z
    ctx->pc = 0x2c726cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2c7270: 0x4b46e988  vmaddx.xz   $vf6, $vf29, $vf6x
    ctx->pc = 0x2c7270u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2c7274: 0x4b47e1be  vmulaz.xz   $ACC, $vf28, $vf7z
    ctx->pc = 0x2c7274u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x2c7278: 0x4b47e9c8  vmaddx.xz   $vf7, $vf29, $vf7x
    ctx->pc = 0x2c7278u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2c727c: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2c727cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c7280: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x2c7280u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2c7284: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x2c7284u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2c7288: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x2c7288u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2c728c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c728cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c7290: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c7290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7294: 0xc64c0008  lwc1        $f12, 0x8($s2)
    ctx->pc = 0x2c7294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c7298: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2c7298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c729c: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x2C729Cu;
    SET_GPR_U32(ctx, 31, 0x2C72A4u);
    ctx->pc = 0x2C72A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C729Cu;
    // 0x2c72a0: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x2C729Cu, 0x2C72A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C72A4u;
label_2c72a4:
    // 0x2c72a4: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2c72a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c72a8: 0xdad00000  lqc2        $vf16, 0x0($s6)
    ctx->pc = 0x2c72a8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2c72ac: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2c72acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2c72b0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2c72b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2c72b4: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x2c72b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2c72b8: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2c72b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2c72bc: 0x4614a01a  mula.s      $f20, $f20
    ctx->pc = 0x2c72bcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[20], ctx->f[20]));
    // 0x2c72c0: 0x4600001d  msub.s      $f0, $f0, $f0
    ctx->pc = 0x2c72c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2c72c4: 0x46000004  c1          0x4
    ctx->pc = 0x2c72c4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2c72c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C72C8u;
    {
        const bool branch_taken_0x2c72c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C72CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72C8u;
        // 0x2c72cc: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c72c8) {
            ctx->pc = 0x2C72E8u;
            goto label_2c72e8;
        }
    }
    ctx->pc = 0x2C72D0u;
label_2c72d0:
    // 0x2c72d0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2c72d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c72d4: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x2c72d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c72d8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2c72d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2c72dc: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2c72dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2c72e0: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x2c72e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2c72e4: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x2c72e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2c72e8:
    // 0x2c72e8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2c72e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2c72ec: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x2c72ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x2c72f0: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x2c72f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2c72f4: 0x1440ff7a  bnez        $v0, . + 4 + (-0x86 << 2)
    ctx->pc = 0x2C72F4u;
    {
        const bool branch_taken_0x2c72f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C72F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72F4u;
        // 0x2c72f8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c72f4) {
            ctx->pc = 0x2C70E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c70e0;
        }
    }
    ctx->pc = 0x2C72FCu;
label_2c72fc:
    // 0x2c72fc: 0xdfb001c0  ld          $s0, 0x1C0($sp)
    ctx->pc = 0x2c72fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2c7300: 0xdfb101c8  ld          $s1, 0x1C8($sp)
    ctx->pc = 0x2c7300u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x2c7304: 0xdfb201d0  ld          $s2, 0x1D0($sp)
    ctx->pc = 0x2c7304u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2c7308: 0xdfb301d8  ld          $s3, 0x1D8($sp)
    ctx->pc = 0x2c7308u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x2c730c: 0xdfb401e0  ld          $s4, 0x1E0($sp)
    ctx->pc = 0x2c730cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2c7310: 0xdfb501e8  ld          $s5, 0x1E8($sp)
    ctx->pc = 0x2c7310u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2c7314: 0xdfb601f0  ld          $s6, 0x1F0($sp)
    ctx->pc = 0x2c7314u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2c7318: 0xdfbf01f8  ld          $ra, 0x1F8($sp)
    ctx->pc = 0x2c7318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x2c731c: 0xc7b50208  lwc1        $f21, 0x208($sp)
    ctx->pc = 0x2c731cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c7320: 0xc7b40200  lwc1        $f20, 0x200($sp)
    ctx->pc = 0x2c7320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c7324: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7324u;
        // 0x2c7328: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C732Cu;
    // 0x2c732c: 0x0  nop
    ctx->pc = 0x2c732cu;
    // NOP
    // 0x2c7330: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x2c7330u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2c7334: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2c7334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2c7338: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2c7338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c733c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C733Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C733Cu;
        // 0x2c7340: 0x94820004  lhu         $v0, 0x4($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C733Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7344u;
    // 0x2c7344: 0x0  nop
    ctx->pc = 0x2c7344u;
    // NOP
    ctx->pc = 0x2c7348u;
}
