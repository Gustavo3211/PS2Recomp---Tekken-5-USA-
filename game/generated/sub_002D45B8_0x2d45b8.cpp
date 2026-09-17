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

// Function: sub_002D45B8
// Address: 0x2d45b8 - 0x2d4678
void sub_002D45B8_0x2d45b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D45B8_0x2d45b8");
#endif

    switch (ctx->pc) {
        case 0x2d45b8u: goto label_2d45b8;
        case 0x2d45bcu: goto label_2d45bc;
        case 0x2d45c0u: goto label_2d45c0;
        case 0x2d45c4u: goto label_2d45c4;
        case 0x2d45c8u: goto label_2d45c8;
        case 0x2d45ccu: goto label_2d45cc;
        case 0x2d45d0u: goto label_2d45d0;
        case 0x2d45d4u: goto label_2d45d4;
        case 0x2d45d8u: goto label_2d45d8;
        case 0x2d45dcu: goto label_2d45dc;
        case 0x2d45e0u: goto label_2d45e0;
        case 0x2d45e4u: goto label_2d45e4;
        case 0x2d45e8u: goto label_2d45e8;
        case 0x2d45ecu: goto label_2d45ec;
        case 0x2d45f0u: goto label_2d45f0;
        case 0x2d45f4u: goto label_2d45f4;
        case 0x2d45f8u: goto label_2d45f8;
        case 0x2d45fcu: goto label_2d45fc;
        case 0x2d4600u: goto label_2d4600;
        case 0x2d4604u: goto label_2d4604;
        case 0x2d4608u: goto label_2d4608;
        case 0x2d460cu: goto label_2d460c;
        case 0x2d4610u: goto label_2d4610;
        case 0x2d4614u: goto label_2d4614;
        case 0x2d4618u: goto label_2d4618;
        case 0x2d461cu: goto label_2d461c;
        case 0x2d4620u: goto label_2d4620;
        case 0x2d4624u: goto label_2d4624;
        case 0x2d4628u: goto label_2d4628;
        case 0x2d462cu: goto label_2d462c;
        case 0x2d4630u: goto label_2d4630;
        case 0x2d4634u: goto label_2d4634;
        case 0x2d4638u: goto label_2d4638;
        case 0x2d463cu: goto label_2d463c;
        case 0x2d4640u: goto label_2d4640;
        case 0x2d4644u: goto label_2d4644;
        case 0x2d4648u: goto label_2d4648;
        case 0x2d464cu: goto label_2d464c;
        case 0x2d4650u: goto label_2d4650;
        case 0x2d4654u: goto label_2d4654;
        case 0x2d4658u: goto label_2d4658;
        case 0x2d465cu: goto label_2d465c;
        case 0x2d4660u: goto label_2d4660;
        case 0x2d4664u: goto label_2d4664;
        case 0x2d4668u: goto label_2d4668;
        case 0x2d466cu: goto label_2d466c;
        case 0x2d4670u: goto label_2d4670;
        case 0x2d4674u: goto label_2d4674;
        default: break;
    }

    ctx->pc = 0x2d45b8u;

label_2d45b8:
    // 0x2d45b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d45b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d45bc:
    // 0x2d45bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d45bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2d45c0:
    // 0x2d45c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d45c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d45c4:
    // 0x2d45c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d45c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2d45c8:
    // 0x2d45c8: 0x860500b6  lh          $a1, 0xB6($s0)
    ctx->pc = 0x2d45c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 182)));
label_2d45cc:
    // 0x2d45cc: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
label_2d45d0:
    if (ctx->pc == 0x2D45D0u) {
        ctx->pc = 0x2D45D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D45CCu;
        // 0x2d45d0: 0x2604009c  addiu       $a0, $s0, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D45D4u;
        goto label_2d45d4;
    }
    ctx->pc = 0x2D45CCu;
    {
        const bool branch_taken_0x2d45cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D45D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D45CCu;
        // 0x2d45d0: 0x2604009c  addiu       $a0, $s0, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d45cc) {
            ctx->pc = 0x2D462Cu;
            goto label_2d462c;
        }
    }
    ctx->pc = 0x2D45D4u;
label_2d45d4:
    // 0x2d45d4: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_2d45d8:
    if (ctx->pc == 0x2D45D8u) {
        ctx->pc = 0x2D45D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D45D4u;
        // 0x2d45d8: 0x520c0  sll         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D45DCu;
        goto label_2d45dc;
    }
    ctx->pc = 0x2D45D4u;
    {
        const bool branch_taken_0x2d45d4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2D45D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D45D4u;
        // 0x2d45d8: 0x520c0  sll         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d45d4) {
            ctx->pc = 0x2D4608u;
            goto label_2d4608;
        }
    }
    ctx->pc = 0x2D45DCu;
label_2d45dc:
    // 0x2d45dc: 0x860200b8  lh          $v0, 0xB8($s0)
    ctx->pc = 0x2d45dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 184)));
label_2d45e0:
    // 0x2d45e0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2d45e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2d45e4:
    // 0x2d45e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d45e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d45e8:
    // 0x2d45e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d45e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2d45ec:
    // 0x2d45ec: 0x6862ffff  ldl         $v0, -0x1($v1)
    ctx->pc = 0x2d45ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2d45f0:
    // 0x2d45f0: 0x6c62fff8  ldr         $v0, -0x8($v1)
    ctx->pc = 0x2d45f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2d45f4:
    // 0x2d45f4: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2d45f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d45f8:
    // 0x2d45f8: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2d45f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d45fc:
    // 0x2d45fc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2d4600:
    if (ctx->pc == 0x2D4600u) {
        ctx->pc = 0x2D4600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D45FCu;
        // 0x2d4600: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4604u;
        goto label_2d4604;
    }
    ctx->pc = 0x2D45FCu;
    {
        const bool branch_taken_0x2d45fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D45FCu;
        // 0x2d4600: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d45fc) {
            ctx->pc = 0x2D460Cu;
            goto label_2d460c;
        }
    }
    ctx->pc = 0x2D4604u;
label_2d4604:
    // 0x2d4604: 0x0  nop
    ctx->pc = 0x2d4604u;
    // NOP
label_2d4608:
    // 0x2d4608: 0x8e0600b8  lw          $a2, 0xB8($s0)
    ctx->pc = 0x2d4608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_2d460c:
    // 0x2d460c: 0x860300b4  lh          $v1, 0xB4($s0)
    ctx->pc = 0x2d460cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 180)));
label_2d4610:
    // 0x2d4610: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
label_2d4614:
    if (ctx->pc == 0x2D4614u) {
        ctx->pc = 0x2D4614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4610u;
        // 0x2d4614: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4618u;
        goto label_2d4618;
    }
    ctx->pc = 0x2D4610u;
    {
        const bool branch_taken_0x2d4610 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2D4614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4610u;
        // 0x2d4614: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4610) {
            ctx->pc = 0x2D4620u;
            goto label_2d4620;
        }
    }
    ctx->pc = 0x2D4618u;
label_2d4618:
    // 0x2d4618: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x2d4618u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_2d461c:
    // 0x2d461c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d461cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d4620:
    // 0x2d4620: 0xc0f809  jalr        $a2
label_2d4624:
    if (ctx->pc == 0x2D4624u) {
        ctx->pc = 0x2D4624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4620u;
        // 0x2d4624: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4628u;
        goto label_2d4628;
    }
    ctx->pc = 0x2D4620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2D4628u);
        ctx->pc = 0x2D4624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4620u;
        // 0x2d4624: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4620u, 0x2D4628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D4628u;
label_2d4628:
    // 0x2d4628: 0x2604009c  addiu       $a0, $s0, 0x9C
    ctx->pc = 0x2d4628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
label_2d462c:
    // 0x2d462c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d462cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4630:
    // 0x2d4630: 0xc04a151  jal         func_128544
label_2d4634:
    if (ctx->pc == 0x2D4634u) {
        ctx->pc = 0x2D4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4630u;
        // 0x2d4634: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4638u;
        goto label_2d4638;
    }
    ctx->pc = 0x2D4630u;
    SET_GPR_U32(ctx, 31, 0x2D4638u);
    ctx->pc = 0x2D4634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4630u;
    // 0x2d4634: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2D4630u, 0x2D4638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4638u;
label_2d4638:
    // 0x2d4638: 0x260400a4  addiu       $a0, $s0, 0xA4
    ctx->pc = 0x2d4638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
label_2d463c:
    // 0x2d463c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d463cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4640:
    // 0x2d4640: 0xc04a151  jal         func_128544
label_2d4644:
    if (ctx->pc == 0x2D4644u) {
        ctx->pc = 0x2D4644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4640u;
        // 0x2d4644: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4648u;
        goto label_2d4648;
    }
    ctx->pc = 0x2D4640u;
    SET_GPR_U32(ctx, 31, 0x2D4648u);
    ctx->pc = 0x2D4644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4640u;
    // 0x2d4644: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2D4640u, 0x2D4648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4648u;
label_2d4648:
    // 0x2d4648: 0x260400ac  addiu       $a0, $s0, 0xAC
    ctx->pc = 0x2d4648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
label_2d464c:
    // 0x2d464c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d464cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4650:
    // 0x2d4650: 0xc04a151  jal         func_128544
label_2d4654:
    if (ctx->pc == 0x2D4654u) {
        ctx->pc = 0x2D4654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4650u;
        // 0x2d4654: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4658u;
        goto label_2d4658;
    }
    ctx->pc = 0x2D4650u;
    SET_GPR_U32(ctx, 31, 0x2D4658u);
    ctx->pc = 0x2D4654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4650u;
    // 0x2d4654: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2D4650u, 0x2D4658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4658u;
label_2d4658:
    // 0x2d4658: 0x260400b4  addiu       $a0, $s0, 0xB4
    ctx->pc = 0x2d4658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
label_2d465c:
    // 0x2d465c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d465cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4660:
    // 0x2d4660: 0xc04a151  jal         func_128544
label_2d4664:
    if (ctx->pc == 0x2D4664u) {
        ctx->pc = 0x2D4664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4660u;
        // 0x2d4664: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4668u;
        goto label_2d4668;
    }
    ctx->pc = 0x2D4660u;
    SET_GPR_U32(ctx, 31, 0x2D4668u);
    ctx->pc = 0x2D4664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4660u;
    // 0x2d4664: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2D4660u, 0x2D4668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4668u;
label_2d4668:
    // 0x2d4668: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d4668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d466c:
    // 0x2d466c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d466cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d4670:
    // 0x2d4670: 0x3e00008  jr          $ra
label_2d4674:
    if (ctx->pc == 0x2D4674u) {
        ctx->pc = 0x2D4674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4670u;
        // 0x2d4674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4678u;
        goto label_fallthrough_0x2d4670;
    }
    ctx->pc = 0x2D4670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4670u;
        // 0x2d4674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d4670:
    ctx->pc = 0x2D4678u;
}
