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

// Function: sub_004A9940
// Address: 0x4a9940 - 0x4a9a38
void sub_004A9940_0x4a9940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9940_0x4a9940");
#endif

    switch (ctx->pc) {
        case 0x4a9978u: goto label_4a9978;
        case 0x4a9988u: goto label_4a9988;
        case 0x4a9998u: goto label_4a9998;
        case 0x4a99a8u: goto label_4a99a8;
        case 0x4a99b0u: goto label_4a99b0;
        case 0x4a99c0u: goto label_4a99c0;
        case 0x4a99d0u: goto label_4a99d0;
        case 0x4a99e0u: goto label_4a99e0;
        case 0x4a99f0u: goto label_4a99f0;
        case 0x4a9a00u: goto label_4a9a00;
        case 0x4a9a10u: goto label_4a9a10;
        case 0x4a9a20u: goto label_4a9a20;
        case 0x4a9a30u: goto label_4a9a30;
        default: break;
    }

    ctx->pc = 0x4a9940u;

    // 0x4a9940: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4a9940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4a9944: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a9944u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a9948: 0x8442d68a  lh          $v0, -0x2976($v0)
    ctx->pc = 0x4a9948u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72D68Au));
    // 0x4a994c: 0x2c43000d  sltiu       $v1, $v0, 0xD
    ctx->pc = 0x4a994cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x4a9950: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x4A9950u;
    {
        const bool branch_taken_0x4a9950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9950u;
        // 0x4a9954: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9950) {
            ctx->pc = 0x4A9A40u;
            return;
        }
    }
    ctx->pc = 0x4A9958u;
    // 0x4a9958: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4a9958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4a995c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4a995cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4a9960: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a9960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a9964: 0x8c63b250  lw          $v1, -0x4DB0($v1)
    ctx->pc = 0x4a9964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947408)));
    // 0x4a9968: 0x600008  jr          $v1
    ctx->pc = 0x4A9968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4A9970u: goto label_4a9970;
            case 0x4A9980u: goto label_4a9980;
            case 0x4A9990u: goto label_4a9990;
            case 0x4A99A0u: goto label_4a99a0;
            case 0x4A99B8u: goto label_4a99b8;
            case 0x4A99C8u: goto label_4a99c8;
            case 0x4A99D8u: goto label_4a99d8;
            case 0x4A99E8u: goto label_4a99e8;
            case 0x4A99F8u: goto label_4a99f8;
            case 0x4A9A08u: goto label_4a9a08;
            case 0x4A9A18u: goto label_4a9a18;
            case 0x4A9A28u: goto label_4a9a28;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9968u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4A9970u;
label_4a9970:
    // 0x4a9970: 0xc12919e  jal         func_4A4678
    ctx->pc = 0x4A9970u;
    SET_GPR_U32(ctx, 31, 0x4A9978u);
    ctx->pc = 0x4A4678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4678u, 0x4A9970u, 0x4A9978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9978u;
label_4a9978:
    // 0x4a9978: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x4A9978u;
    {
        const bool branch_taken_0x4a9978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a9978) {
            ctx->pc = 0x4A9A40u;
            return;
        }
    }
    ctx->pc = 0x4A9980u;
label_4a9980:
    // 0x4a9980: 0xc126c34  jal         func_49B0D0
    ctx->pc = 0x4A9980u;
    SET_GPR_U32(ctx, 31, 0x4A9988u);
    ctx->pc = 0x49B0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B0D0u, 0x4A9980u, 0x4A9988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9988u;
label_4a9988:
    // 0x4a9988: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x4A9988u;
    {
        const bool branch_taken_0x4a9988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a9988) {
            ctx->pc = 0x4A9A40u;
            return;
        }
    }
    ctx->pc = 0x4A9990u;
label_4a9990:
    // 0x4a9990: 0xc12a69e  jal         func_4A9A78
    ctx->pc = 0x4A9990u;
    SET_GPR_U32(ctx, 31, 0x4A9998u);
    ctx->pc = 0x4A9A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9A78u, 0x4A9990u, 0x4A9998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9998u;
label_4a9998:
    // 0x4a9998: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x4A9998u;
    {
        const bool branch_taken_0x4a9998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a9998) {
            ctx->pc = 0x4A9A40u;
            return;
        }
    }
    ctx->pc = 0x4A99A0u;
label_4a99a0:
    // 0x4a99a0: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4A99A0u;
    SET_GPR_U32(ctx, 31, 0x4A99A8u);
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4A99A0u, 0x4A99A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A99A8u;
label_4a99a8:
    // 0x4a99a8: 0xc128840  jal         func_4A2100
    ctx->pc = 0x4A99A8u;
    SET_GPR_U32(ctx, 31, 0x4A99B0u);
    ctx->pc = 0x4A99ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A99A8u;
    // 0x4a99ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2100u, 0x4A99A8u, 0x4A99B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A99B0u;
label_4a99b0:
    // 0x4a99b0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x4A99B0u;
    {
        const bool branch_taken_0x4a99b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a99b0) {
            ctx->pc = 0x4A9A40u;
            return;
        }
    }
    ctx->pc = 0x4A99B8u;
label_4a99b8:
    // 0x4a99b8: 0xc12b59c  jal         func_4AD670
    ctx->pc = 0x4A99B8u;
    SET_GPR_U32(ctx, 31, 0x4A99C0u);
    ctx->pc = 0x4AD670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD670u, 0x4A99B8u, 0x4A99C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A99C0u;
label_4a99c0:
    // 0x4a99c0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x4A99C0u;
    {
        const bool branch_taken_0x4a99c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a99c0) {
            ctx->pc = 0x4A9A40u;
            return;
        }
    }
    ctx->pc = 0x4A99C8u;
label_4a99c8:
    // 0x4a99c8: 0xc12b578  jal         func_4AD5E0
    ctx->pc = 0x4A99C8u;
    SET_GPR_U32(ctx, 31, 0x4A99D0u);
    ctx->pc = 0x4AD5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD5E0u, 0x4A99C8u, 0x4A99D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A99D0u;
label_4a99d0:
    // 0x4a99d0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x4A99D0u;
    {
        const bool branch_taken_0x4a99d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a99d0) {
            ctx->pc = 0x4A9A40u;
            return;
        }
    }
    ctx->pc = 0x4A99D8u;
label_4a99d8:
    // 0x4a99d8: 0xc126076  jal         func_4981D8
    ctx->pc = 0x4A99D8u;
    SET_GPR_U32(ctx, 31, 0x4A99E0u);
    ctx->pc = 0x4981D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4981D8u, 0x4A99D8u, 0x4A99E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A99E0u;
label_4a99e0:
    // 0x4a99e0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x4A99E0u;
    {
        const bool branch_taken_0x4a99e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a99e0) {
            ctx->pc = 0x4A9A40u;
            return;
        }
    }
    ctx->pc = 0x4A99E8u;
label_4a99e8:
    // 0x4a99e8: 0xc12b212  jal         func_4AC848
    ctx->pc = 0x4A99E8u;
    SET_GPR_U32(ctx, 31, 0x4A99F0u);
    ctx->pc = 0x4AC848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC848u, 0x4A99E8u, 0x4A99F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A99F0u;
label_4a99f0:
    // 0x4a99f0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4A99F0u;
    {
        const bool branch_taken_0x4a99f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a99f0) {
            ctx->pc = 0x4A9A40u;
            return;
        }
    }
    ctx->pc = 0x4A99F8u;
label_4a99f8:
    // 0x4a99f8: 0xc126a16  jal         func_49A858
    ctx->pc = 0x4A99F8u;
    SET_GPR_U32(ctx, 31, 0x4A9A00u);
    ctx->pc = 0x49A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A858u, 0x4A99F8u, 0x4A9A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9A00u;
label_4a9a00:
    // 0x4a9a00: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4A9A00u;
    {
        const bool branch_taken_0x4a9a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a9a00) {
            ctx->pc = 0x4A9A40u;
            return;
        }
    }
    ctx->pc = 0x4A9A08u;
label_4a9a08:
    // 0x4a9a08: 0xc1269b8  jal         func_49A6E0
    ctx->pc = 0x4A9A08u;
    SET_GPR_U32(ctx, 31, 0x4A9A10u);
    ctx->pc = 0x49A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A6E0u, 0x4A9A08u, 0x4A9A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9A10u;
label_4a9a10:
    // 0x4a9a10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4A9A10u;
    {
        const bool branch_taken_0x4a9a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a9a10) {
            ctx->pc = 0x4A9A40u;
            return;
        }
    }
    ctx->pc = 0x4A9A18u;
label_4a9a18:
    // 0x4a9a18: 0xc1265a6  jal         func_499698
    ctx->pc = 0x4A9A18u;
    SET_GPR_U32(ctx, 31, 0x4A9A20u);
    ctx->pc = 0x499698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499698u, 0x4A9A18u, 0x4A9A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9A20u;
label_4a9a20:
    // 0x4a9a20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4A9A20u;
    {
        const bool branch_taken_0x4a9a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a9a20) {
            ctx->pc = 0x4A9A40u;
            return;
        }
    }
    ctx->pc = 0x4A9A28u;
label_4a9a28:
    // 0x4a9a28: 0xc126454  jal         func_499150
    ctx->pc = 0x4A9A28u;
    SET_GPR_U32(ctx, 31, 0x4A9A30u);
    ctx->pc = 0x499150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499150u, 0x4A9A28u, 0x4A9A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9A30u;
label_4a9a30:
    // 0x4a9a30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9A30u;
    {
        const bool branch_taken_0x4a9a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a9a30) {
            ctx->pc = 0x4A9A40u;
            return;
        }
    }
    ctx->pc = 0x4A9A38u;
}
