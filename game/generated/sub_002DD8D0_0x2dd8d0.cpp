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

// Function: sub_002DD8D0
// Address: 0x2dd8d0 - 0x2dd948
void sub_002DD8D0_0x2dd8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD8D0_0x2dd8d0");
#endif

    switch (ctx->pc) {
        case 0x2dd8e4u: goto label_2dd8e4;
        case 0x2dd90cu: goto label_2dd90c;
        case 0x2dd918u: goto label_2dd918;
        case 0x2dd928u: goto label_2dd928;
        case 0x2dd930u: goto label_2dd930;
        case 0x2dd938u: goto label_2dd938;
        default: break;
    }

    ctx->pc = 0x2dd8d0u;

    // 0x2dd8d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dd8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dd8d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dd8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dd8d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2dd8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2dd8dc: 0xc0b75d4  jal         func_2DD750
    ctx->pc = 0x2DD8DCu;
    SET_GPR_U32(ctx, 31, 0x2DD8E4u);
    ctx->pc = 0x2DD8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD8DCu;
    // 0x2dd8e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD750u, 0x2DD8DCu, 0x2DD8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD8E4u;
label_2dd8e4:
    // 0x2dd8e4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DD8E4u;
    {
        const bool branch_taken_0x2dd8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD8E4u;
        // 0x2dd8e8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd8e4) {
            ctx->pc = 0x2DD938u;
            goto label_2dd938;
        }
    }
    ctx->pc = 0x2DD8ECu;
    // 0x2dd8ec: 0x8e06005c  lw          $a2, 0x5C($s0)
    ctx->pc = 0x2dd8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2dd8f0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dd8f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd8f4: 0x8e070064  lw          $a3, 0x64($s0)
    ctx->pc = 0x2dd8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2dd8f8: 0xc31026  xor         $v0, $a2, $v1
    ctx->pc = 0x2dd8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
    // 0x2dd8fc: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x2dd8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2dd900: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2dd900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2dd904: 0xc0c67d0  jal         func_319F40
    ctx->pc = 0x2DD904u;
    SET_GPR_U32(ctx, 31, 0x2DD90Cu);
    ctx->pc = 0x2DD908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD904u;
    // 0x2dd908: 0x62400a  movz        $t0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319F40u, 0x2DD904u, 0x2DD90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD90Cu;
label_2dd90c:
    // 0x2dd90c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd910: 0xc0b780a  jal         func_2DE028
    ctx->pc = 0x2DD910u;
    SET_GPR_U32(ctx, 31, 0x2DD918u);
    ctx->pc = 0x2DD914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD910u;
    // 0x2dd914: 0x8e05006c  lw          $a1, 0x6C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE028u, 0x2DD910u, 0x2DD918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD918u;
label_2dd918:
    // 0x2dd918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd91c: 0x82050068  lb          $a1, 0x68($s0)
    ctx->pc = 0x2dd91cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2dd920: 0xc0b7830  jal         func_2DE0C0
    ctx->pc = 0x2DD920u;
    SET_GPR_U32(ctx, 31, 0x2DD928u);
    ctx->pc = 0x2DD924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD920u;
    // 0x2dd924: 0x82060069  lb          $a2, 0x69($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 105)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE0C0u, 0x2DD920u, 0x2DD928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD928u;
label_2dd928:
    // 0x2dd928: 0xc0b7652  jal         func_2DD948
    ctx->pc = 0x2DD928u;
    SET_GPR_U32(ctx, 31, 0x2DD930u);
    ctx->pc = 0x2DD92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD928u;
    // 0x2dd92c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD948u, 0x2DD928u, 0x2DD930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD930u;
label_2dd930:
    // 0x2dd930: 0xc0b75ce  jal         func_2DD738
    ctx->pc = 0x2DD930u;
    SET_GPR_U32(ctx, 31, 0x2DD938u);
    ctx->pc = 0x2DD934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD930u;
    // 0x2dd934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD738u, 0x2DD930u, 0x2DD938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD938u;
label_2dd938:
    // 0x2dd938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dd938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd93c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2dd93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dd940: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD940u;
        // 0x2dd944: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD948u;
}
