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

// Function: sub_002CB920
// Address: 0x2cb920 - 0x2cba38
void sub_002CB920_0x2cb920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB920_0x2cb920");
#endif

    switch (ctx->pc) {
        case 0x2cb960u: goto label_2cb960;
        case 0x2cb970u: goto label_2cb970;
        case 0x2cb980u: goto label_2cb980;
        case 0x2cb990u: goto label_2cb990;
        case 0x2cb9a0u: goto label_2cb9a0;
        case 0x2cb9b0u: goto label_2cb9b0;
        case 0x2cb9c0u: goto label_2cb9c0;
        case 0x2cb9d0u: goto label_2cb9d0;
        case 0x2cb9e0u: goto label_2cb9e0;
        case 0x2cb9f0u: goto label_2cb9f0;
        case 0x2cba00u: goto label_2cba00;
        case 0x2cba10u: goto label_2cba10;
        case 0x2cba18u: goto label_2cba18;
        default: break;
    }

    ctx->pc = 0x2cb920u;

    // 0x2cb920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cb920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cb924: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cb924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cb928: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cb928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb92c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cb92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cb930: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2cb930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2cb934: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x2cb934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x2cb938: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2CB938u;
    {
        const bool branch_taken_0x2cb938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB938u;
        // 0x2cb93c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb938) {
            ctx->pc = 0x2CBA10u;
            goto label_2cba10;
        }
    }
    ctx->pc = 0x2CB940u;
    // 0x2cb940: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2cb940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2cb944: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cb944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cb948: 0x8c63e650  lw          $v1, -0x19B0($v1)
    ctx->pc = 0x2cb948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960720)));
    // 0x2cb94c: 0x600008  jr          $v1
    ctx->pc = 0x2CB94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CB958u: goto label_2cb958;
            case 0x2CB968u: goto label_2cb968;
            case 0x2CB978u: goto label_2cb978;
            case 0x2CB988u: goto label_2cb988;
            case 0x2CB998u: goto label_2cb998;
            case 0x2CB9A8u: goto label_2cb9a8;
            case 0x2CB9B8u: goto label_2cb9b8;
            case 0x2CB9C8u: goto label_2cb9c8;
            case 0x2CB9D8u: goto label_2cb9d8;
            case 0x2CB9E8u: goto label_2cb9e8;
            case 0x2CB9F8u: goto label_2cb9f8;
            case 0x2CBA08u: goto label_2cba08;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB94Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CB954u;
    // 0x2cb954: 0x0  nop
    ctx->pc = 0x2cb954u;
    // NOP
label_2cb958:
    // 0x2cb958: 0xc0b3898  jal         func_2CE260
    ctx->pc = 0x2CB958u;
    SET_GPR_U32(ctx, 31, 0x2CB960u);
    ctx->pc = 0x2CB95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB958u;
    // 0x2cb95c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE260u, 0x2CB958u, 0x2CB960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB960u;
label_2cb960:
    // 0x2cb960: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2CB960u;
    {
        const bool branch_taken_0x2cb960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb960) {
            ctx->pc = 0x2CBA10u;
            goto label_2cba10;
        }
    }
    ctx->pc = 0x2CB968u;
label_2cb968:
    // 0x2cb968: 0xc0b38a4  jal         func_2CE290
    ctx->pc = 0x2CB968u;
    SET_GPR_U32(ctx, 31, 0x2CB970u);
    ctx->pc = 0x2CB96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB968u;
    // 0x2cb96c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE290u, 0x2CB968u, 0x2CB970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB970u;
label_2cb970:
    // 0x2cb970: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2CB970u;
    {
        const bool branch_taken_0x2cb970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb970) {
            ctx->pc = 0x2CBA10u;
            goto label_2cba10;
        }
    }
    ctx->pc = 0x2CB978u;
label_2cb978:
    // 0x2cb978: 0xc0b38f4  jal         func_2CE3D0
    ctx->pc = 0x2CB978u;
    SET_GPR_U32(ctx, 31, 0x2CB980u);
    ctx->pc = 0x2CB97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB978u;
    // 0x2cb97c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE3D0u, 0x2CB978u, 0x2CB980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB980u;
label_2cb980:
    // 0x2cb980: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2CB980u;
    {
        const bool branch_taken_0x2cb980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb980) {
            ctx->pc = 0x2CBA10u;
            goto label_2cba10;
        }
    }
    ctx->pc = 0x2CB988u;
label_2cb988:
    // 0x2cb988: 0xc0b391a  jal         func_2CE468
    ctx->pc = 0x2CB988u;
    SET_GPR_U32(ctx, 31, 0x2CB990u);
    ctx->pc = 0x2CB98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB988u;
    // 0x2cb98c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE468u, 0x2CB988u, 0x2CB990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB990u;
label_2cb990:
    // 0x2cb990: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2CB990u;
    {
        const bool branch_taken_0x2cb990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb990) {
            ctx->pc = 0x2CBA10u;
            goto label_2cba10;
        }
    }
    ctx->pc = 0x2CB998u;
label_2cb998:
    // 0x2cb998: 0xc0b395e  jal         func_2CE578
    ctx->pc = 0x2CB998u;
    SET_GPR_U32(ctx, 31, 0x2CB9A0u);
    ctx->pc = 0x2CB99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB998u;
    // 0x2cb99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE578u, 0x2CB998u, 0x2CB9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB9A0u;
label_2cb9a0:
    // 0x2cb9a0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2CB9A0u;
    {
        const bool branch_taken_0x2cb9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb9a0) {
            ctx->pc = 0x2CBA10u;
            goto label_2cba10;
        }
    }
    ctx->pc = 0x2CB9A8u;
label_2cb9a8:
    // 0x2cb9a8: 0xc0b3ade  jal         func_2CEB78
    ctx->pc = 0x2CB9A8u;
    SET_GPR_U32(ctx, 31, 0x2CB9B0u);
    ctx->pc = 0x2CB9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB9A8u;
    // 0x2cb9ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEB78u, 0x2CB9A8u, 0x2CB9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB9B0u;
label_2cb9b0:
    // 0x2cb9b0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2CB9B0u;
    {
        const bool branch_taken_0x2cb9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb9b0) {
            ctx->pc = 0x2CBA10u;
            goto label_2cba10;
        }
    }
    ctx->pc = 0x2CB9B8u;
label_2cb9b8:
    // 0x2cb9b8: 0xc0b3b1c  jal         func_2CEC70
    ctx->pc = 0x2CB9B8u;
    SET_GPR_U32(ctx, 31, 0x2CB9C0u);
    ctx->pc = 0x2CB9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB9B8u;
    // 0x2cb9bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEC70u, 0x2CB9B8u, 0x2CB9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB9C0u;
label_2cb9c0:
    // 0x2cb9c0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2CB9C0u;
    {
        const bool branch_taken_0x2cb9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb9c0) {
            ctx->pc = 0x2CBA10u;
            goto label_2cba10;
        }
    }
    ctx->pc = 0x2CB9C8u;
label_2cb9c8:
    // 0x2cb9c8: 0xc0b3b2e  jal         func_2CECB8
    ctx->pc = 0x2CB9C8u;
    SET_GPR_U32(ctx, 31, 0x2CB9D0u);
    ctx->pc = 0x2CB9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB9C8u;
    // 0x2cb9cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CECB8u, 0x2CB9C8u, 0x2CB9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB9D0u;
label_2cb9d0:
    // 0x2cb9d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2CB9D0u;
    {
        const bool branch_taken_0x2cb9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb9d0) {
            ctx->pc = 0x2CBA10u;
            goto label_2cba10;
        }
    }
    ctx->pc = 0x2CB9D8u;
label_2cb9d8:
    // 0x2cb9d8: 0xc0b3bb2  jal         func_2CEEC8
    ctx->pc = 0x2CB9D8u;
    SET_GPR_U32(ctx, 31, 0x2CB9E0u);
    ctx->pc = 0x2CB9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB9D8u;
    // 0x2cb9dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEEC8u, 0x2CB9D8u, 0x2CB9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB9E0u;
label_2cb9e0:
    // 0x2cb9e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2CB9E0u;
    {
        const bool branch_taken_0x2cb9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb9e0) {
            ctx->pc = 0x2CBA10u;
            goto label_2cba10;
        }
    }
    ctx->pc = 0x2CB9E8u;
label_2cb9e8:
    // 0x2cb9e8: 0xc0b3bea  jal         func_2CEFA8
    ctx->pc = 0x2CB9E8u;
    SET_GPR_U32(ctx, 31, 0x2CB9F0u);
    ctx->pc = 0x2CB9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB9E8u;
    // 0x2cb9ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEFA8u, 0x2CB9E8u, 0x2CB9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB9F0u;
label_2cb9f0:
    // 0x2cb9f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CB9F0u;
    {
        const bool branch_taken_0x2cb9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb9f0) {
            ctx->pc = 0x2CBA10u;
            goto label_2cba10;
        }
    }
    ctx->pc = 0x2CB9F8u;
label_2cb9f8:
    // 0x2cb9f8: 0xc0b3bfc  jal         func_2CEFF0
    ctx->pc = 0x2CB9F8u;
    SET_GPR_U32(ctx, 31, 0x2CBA00u);
    ctx->pc = 0x2CB9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB9F8u;
    // 0x2cb9fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEFF0u, 0x2CB9F8u, 0x2CBA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA00u;
label_2cba00:
    // 0x2cba00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CBA00u;
    {
        const bool branch_taken_0x2cba00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cba00) {
            ctx->pc = 0x2CBA10u;
            goto label_2cba10;
        }
    }
    ctx->pc = 0x2CBA08u;
label_2cba08:
    // 0x2cba08: 0xc0b3c02  jal         func_2CF008
    ctx->pc = 0x2CBA08u;
    SET_GPR_U32(ctx, 31, 0x2CBA10u);
    ctx->pc = 0x2CBA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBA08u;
    // 0x2cba0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF008u, 0x2CBA08u, 0x2CBA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA10u;
label_2cba10:
    // 0x2cba10: 0xc0b2e9e  jal         func_2CBA78
    ctx->pc = 0x2CBA10u;
    SET_GPR_U32(ctx, 31, 0x2CBA18u);
    ctx->pc = 0x2CBA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBA10u;
    // 0x2cba14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA78u, 0x2CBA10u, 0x2CBA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA18u;
label_2cba18:
    // 0x2cba18: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2cba18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2cba1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cba1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cba20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cba20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba24: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x2cba24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x2cba28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cba28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cba2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA2Cu;
        // 0x2cba30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBA2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBA34u;
    // 0x2cba34: 0x0  nop
    ctx->pc = 0x2cba34u;
    // NOP
    ctx->pc = 0x2cba38u;
}
