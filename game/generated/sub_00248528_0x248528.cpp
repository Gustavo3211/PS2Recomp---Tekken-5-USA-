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

// Function: sub_00248528
// Address: 0x248528 - 0x248608
void sub_00248528_0x248528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248528_0x248528");
#endif

    switch (ctx->pc) {
        case 0x248540u: goto label_248540;
        case 0x248548u: goto label_248548;
        case 0x248550u: goto label_248550;
        case 0x248558u: goto label_248558;
        case 0x248560u: goto label_248560;
        case 0x248568u: goto label_248568;
        case 0x248570u: goto label_248570;
        case 0x248578u: goto label_248578;
        case 0x248580u: goto label_248580;
        case 0x248588u: goto label_248588;
        case 0x248590u: goto label_248590;
        case 0x2485a0u: goto label_2485a0;
        case 0x2485acu: goto label_2485ac;
        case 0x2485b8u: goto label_2485b8;
        case 0x2485c4u: goto label_2485c4;
        case 0x2485d0u: goto label_2485d0;
        case 0x2485dcu: goto label_2485dc;
        case 0x2485e8u: goto label_2485e8;
        case 0x2485f0u: goto label_2485f0;
        default: break;
    }

    ctx->pc = 0x248528u;

    // 0x248528: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x248528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24852c: 0x3c040007  lui         $a0, 0x7
    ctx->pc = 0x24852cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
    // 0x248530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x248534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x248538: 0xc0d62a0  jal         func_358A80
    ctx->pc = 0x248538u;
    SET_GPR_U32(ctx, 31, 0x248540u);
    ctx->pc = 0x24853Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248538u;
    // 0x24853c: 0x34840800  ori         $a0, $a0, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x358A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358A80u, 0x248538u, 0x248540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248540u;
label_248540:
    // 0x248540: 0xc0d632c  jal         func_358CB0
    ctx->pc = 0x248540u;
    SET_GPR_U32(ctx, 31, 0x248548u);
    ctx->pc = 0x248544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248540u;
    // 0x248544: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358CB0u, 0x248540u, 0x248548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248548u;
label_248548:
    // 0x248548: 0xc092122  jal         func_248488
    ctx->pc = 0x248548u;
    SET_GPR_U32(ctx, 31, 0x248550u);
    ctx->pc = 0x24854Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248548u;
    // 0x24854c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248488u, 0x248548u, 0x248550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248550u;
label_248550:
    // 0x248550: 0xc0924c0  jal         func_249300
    ctx->pc = 0x248550u;
    SET_GPR_U32(ctx, 31, 0x248558u);
    ctx->pc = 0x249300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249300u, 0x248550u, 0x248558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248558u;
label_248558:
    // 0x248558: 0xc092140  jal         func_248500
    ctx->pc = 0x248558u;
    SET_GPR_U32(ctx, 31, 0x248560u);
    ctx->pc = 0x24855Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248558u;
    // 0x24855c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248500u, 0x248558u, 0x248560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248560u;
label_248560:
    // 0x248560: 0xc092140  jal         func_248500
    ctx->pc = 0x248560u;
    SET_GPR_U32(ctx, 31, 0x248568u);
    ctx->pc = 0x248564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248560u;
    // 0x248564: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248500u, 0x248560u, 0x248568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248568u;
label_248568:
    // 0x248568: 0xc092140  jal         func_248500
    ctx->pc = 0x248568u;
    SET_GPR_U32(ctx, 31, 0x248570u);
    ctx->pc = 0x24856Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248568u;
    // 0x24856c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248500u, 0x248568u, 0x248570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248570u;
label_248570:
    // 0x248570: 0xc092140  jal         func_248500
    ctx->pc = 0x248570u;
    SET_GPR_U32(ctx, 31, 0x248578u);
    ctx->pc = 0x248574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248570u;
    // 0x248574: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248500u, 0x248570u, 0x248578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248578u;
label_248578:
    // 0x248578: 0xc092140  jal         func_248500
    ctx->pc = 0x248578u;
    SET_GPR_U32(ctx, 31, 0x248580u);
    ctx->pc = 0x24857Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248578u;
    // 0x24857c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248500u, 0x248578u, 0x248580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248580u;
label_248580:
    // 0x248580: 0xc092140  jal         func_248500
    ctx->pc = 0x248580u;
    SET_GPR_U32(ctx, 31, 0x248588u);
    ctx->pc = 0x248584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248580u;
    // 0x248584: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248500u, 0x248580u, 0x248588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248588u;
label_248588:
    // 0x248588: 0xc092140  jal         func_248500
    ctx->pc = 0x248588u;
    SET_GPR_U32(ctx, 31, 0x248590u);
    ctx->pc = 0x24858Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248588u;
    // 0x24858c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248500u, 0x248588u, 0x248590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248590u;
label_248590:
    // 0x248590: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x248590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x248594: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x248594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x248598: 0xc0921a0  jal         func_248680
    ctx->pc = 0x248598u;
    SET_GPR_U32(ctx, 31, 0x2485A0u);
    ctx->pc = 0x24859Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248598u;
    // 0x24859c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248680u, 0x248598u, 0x2485A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2485A0u;
label_2485a0:
    // 0x2485a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2485a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2485a4: 0xc0921e0  jal         func_248780
    ctx->pc = 0x2485A4u;
    SET_GPR_U32(ctx, 31, 0x2485ACu);
    ctx->pc = 0x2485A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2485A4u;
    // 0x2485a8: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248780u, 0x2485A4u, 0x2485ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2485ACu;
label_2485ac:
    // 0x2485ac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2485acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2485b0: 0xc0921e0  jal         func_248780
    ctx->pc = 0x2485B0u;
    SET_GPR_U32(ctx, 31, 0x2485B8u);
    ctx->pc = 0x2485B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2485B0u;
    // 0x2485b4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248780u, 0x2485B0u, 0x2485B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2485B8u;
label_2485b8:
    // 0x2485b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2485b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2485bc: 0xc0921e0  jal         func_248780
    ctx->pc = 0x2485BCu;
    SET_GPR_U32(ctx, 31, 0x2485C4u);
    ctx->pc = 0x2485C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2485BCu;
    // 0x2485c0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248780u, 0x2485BCu, 0x2485C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2485C4u;
label_2485c4:
    // 0x2485c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2485c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2485c8: 0xc0921e0  jal         func_248780
    ctx->pc = 0x2485C8u;
    SET_GPR_U32(ctx, 31, 0x2485D0u);
    ctx->pc = 0x2485CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2485C8u;
    // 0x2485cc: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248780u, 0x2485C8u, 0x2485D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2485D0u;
label_2485d0:
    // 0x2485d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2485d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2485d4: 0xc0921e0  jal         func_248780
    ctx->pc = 0x2485D4u;
    SET_GPR_U32(ctx, 31, 0x2485DCu);
    ctx->pc = 0x2485D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2485D4u;
    // 0x2485d8: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248780u, 0x2485D4u, 0x2485DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2485DCu;
label_2485dc:
    // 0x2485dc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2485dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2485e0: 0xc0921e0  jal         func_248780
    ctx->pc = 0x2485E0u;
    SET_GPR_U32(ctx, 31, 0x2485E8u);
    ctx->pc = 0x2485E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2485E0u;
    // 0x2485e4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248780u, 0x2485E0u, 0x2485E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2485E8u;
label_2485e8:
    // 0x2485e8: 0xc091d56  jal         func_247558
    ctx->pc = 0x2485E8u;
    SET_GPR_U32(ctx, 31, 0x2485F0u);
    ctx->pc = 0x247558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247558u, 0x2485E8u, 0x2485F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2485F0u;
label_2485f0:
    // 0x2485f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2485f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2485f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2485f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2485f8: 0xaf82a9b8  sw          $v0, -0x5648($gp)
    ctx->pc = 0x2485f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945208), GPR_U32(ctx, 2));
    // 0x2485fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2485FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2485FCu;
        // 0x248600: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2485FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248604u;
    // 0x248604: 0x0  nop
    ctx->pc = 0x248604u;
    // NOP
    ctx->pc = 0x248608u;
}
