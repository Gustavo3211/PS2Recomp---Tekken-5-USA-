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

// Function: sub_003590D0
// Address: 0x3590d0 - 0x359180
void sub_003590D0_0x3590d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003590D0_0x3590d0");
#endif

    ctx->pc = 0x3590d0u;

    // 0x3590d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3590d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3590d4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x3590d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3590d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3590d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3590dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3590dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3590e0: 0x80d7c98  j           func_35F260
    ctx->pc = 0x3590E0u;
    ctx->pc = 0x3590E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3590E0u;
    // 0x3590e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F260u;
    sub_0035F260_0x35f260(rdram, ctx, runtime); return;
    ctx->pc = 0x3590E8u;
    // 0x3590e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3590e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3590ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3590ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3590f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3590f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3590f4: 0x80d7ca0  j           func_35F280
    ctx->pc = 0x3590F4u;
    ctx->pc = 0x3590F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3590F4u;
    // 0x3590f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F280u;
    sub_0035F280_0x35f280(rdram, ctx, runtime); return;
    ctx->pc = 0x3590FCu;
    // 0x3590fc: 0x0  nop
    ctx->pc = 0x3590fcu;
    // NOP
    // 0x359100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359104: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x359104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x359108: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35910c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x35910cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x359110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359114: 0x80d7df8  j           func_35F7E0
    ctx->pc = 0x359114u;
    ctx->pc = 0x359118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359114u;
    // 0x359118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F7E0u, 0x359114u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35911Cu;
    // 0x35911c: 0x0  nop
    ctx->pc = 0x35911cu;
    // NOP
    // 0x359120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359124: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x359124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x359128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35912c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x35912cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x359130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359134: 0x80d7e12  j           func_35F848
    ctx->pc = 0x359134u;
    ctx->pc = 0x359138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359134u;
    // 0x359138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F848u, 0x359134u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35913Cu;
    // 0x35913c: 0x0  nop
    ctx->pc = 0x35913cu;
    // NOP
    // 0x359140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359144: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x359144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x359148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35914c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x35914cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x359150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359154: 0x80d7e2c  j           func_35F8B0
    ctx->pc = 0x359154u;
    ctx->pc = 0x359158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359154u;
    // 0x359158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F8B0u, 0x359154u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35915Cu;
    // 0x35915c: 0x0  nop
    ctx->pc = 0x35915cu;
    // NOP
    // 0x359160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359164: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x359164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x359168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35916c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x35916cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x359170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359174: 0x80d7e46  j           func_35F918
    ctx->pc = 0x359174u;
    ctx->pc = 0x359178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359174u;
    // 0x359178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F918u, 0x359174u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35917Cu;
    // 0x35917c: 0x0  nop
    ctx->pc = 0x35917cu;
    // NOP
    ctx->pc = 0x359180u;
}
