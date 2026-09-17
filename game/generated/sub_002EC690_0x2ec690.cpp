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

// Function: sub_002EC690
// Address: 0x2ec690 - 0x2ec740
void sub_002EC690_0x2ec690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC690_0x2ec690");
#endif

    switch (ctx->pc) {
        case 0x2ec6b8u: goto label_2ec6b8;
        case 0x2ec6ecu: goto label_2ec6ec;
        case 0x2ec724u: goto label_2ec724;
        default: break;
    }

    ctx->pc = 0x2ec690u;

    // 0x2ec690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ec690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ec694: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2ec694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2ec698: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ec698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ec69c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ec69cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec6a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ec6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ec6a4: 0x263000b8  addiu       $s0, $s1, 0xB8
    ctx->pc = 0x2ec6a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
    // 0x2ec6a8: 0x24a505c0  addiu       $a1, $a1, 0x5C0
    ctx->pc = 0x2ec6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1472));
    // 0x2ec6ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ec6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ec6b0: 0xc0bbdbc  jal         func_2EF6F0
    ctx->pc = 0x2EC6B0u;
    SET_GPR_U32(ctx, 31, 0x2EC6B8u);
    ctx->pc = 0x2EC6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC6B0u;
    // 0x2ec6b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF6F0u, 0x2EC6B0u, 0x2EC6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC6B8u;
label_2ec6b8:
    // 0x2ec6b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ec6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ec6bc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2ec6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2ec6c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC6C0u;
    {
        const bool branch_taken_0x2ec6c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC6C0u;
        // 0x2ec6c4: 0x24a505f8  addiu       $a1, $a1, 0x5F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec6c0) {
            ctx->pc = 0x2EC6D8u;
            goto label_2ec6d8;
        }
    }
    ctx->pc = 0x2EC6C8u;
    // 0x2ec6c8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ec6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ec6cc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ec6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ec6d0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC6D0u;
    {
        const bool branch_taken_0x2ec6d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec6d0) {
            ctx->pc = 0x2EC6E4u;
            goto label_2ec6e4;
        }
    }
    ctx->pc = 0x2EC6D8u;
label_2ec6d8:
    // 0x2ec6d8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ec6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2ec6dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ec6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec6e0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ec6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2ec6e4:
    // 0x2ec6e4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2EC6E4u;
    SET_GPR_U32(ctx, 31, 0x2EC6ECu);
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2EC6E4u, 0x2EC6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC6ECu;
label_2ec6ec:
    // 0x2ec6ec: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2ec6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2ec6f0: 0xae220120  sw          $v0, 0x120($s1)
    ctx->pc = 0x2ec6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
    // 0x2ec6f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ec6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ec6f8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC6F8u;
    {
        const bool branch_taken_0x2ec6f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC6F8u;
        // 0x2ec6fc: 0x24a5fed0  addiu       $a1, $a1, -0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec6f8) {
            ctx->pc = 0x2EC710u;
            goto label_2ec710;
        }
    }
    ctx->pc = 0x2EC700u;
    // 0x2ec700: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ec700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ec704: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ec704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ec708: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC708u;
    {
        const bool branch_taken_0x2ec708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec708) {
            ctx->pc = 0x2EC71Cu;
            goto label_2ec71c;
        }
    }
    ctx->pc = 0x2EC710u;
label_2ec710:
    // 0x2ec710: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ec710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2ec714: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ec714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec718: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ec718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2ec71c:
    // 0x2ec71c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2EC71Cu;
    SET_GPR_U32(ctx, 31, 0x2EC724u);
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2EC71Cu, 0x2EC724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC724u;
label_2ec724:
    // 0x2ec724: 0xae220124  sw          $v0, 0x124($s1)
    ctx->pc = 0x2ec724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
    // 0x2ec728: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ec728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec72c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ec72cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ec730: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ec730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec734: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC734u;
        // 0x2ec738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC73Cu;
    // 0x2ec73c: 0x0  nop
    ctx->pc = 0x2ec73cu;
    // NOP
    ctx->pc = 0x2ec740u;
}
