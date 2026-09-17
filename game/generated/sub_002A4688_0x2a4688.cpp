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

// Function: sub_002A4688
// Address: 0x2a4688 - 0x2a4728
void sub_002A4688_0x2a4688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4688_0x2a4688");
#endif

    switch (ctx->pc) {
        case 0x2a4704u: goto label_2a4704;
        case 0x2a4714u: goto label_2a4714;
        default: break;
    }

    ctx->pc = 0x2a4688u;

    // 0x2a4688: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a4688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a468c: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x2a468cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x2a4690: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a4690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a4694: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2a4694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4698: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a4698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a469c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2a469cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2a46a0: 0x2ce80006  sltiu       $t0, $a3, 0x6
    ctx->pc = 0x2a46a0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2a46a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a46a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a46a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A46A8u;
    {
        const bool branch_taken_0x2a46a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A46ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A46A8u;
        // 0x2a46ac: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a46a8) {
            ctx->pc = 0x2A46C4u;
            goto label_2a46c4;
        }
    }
    ctx->pc = 0x2A46B0u;
    // 0x2a46b0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a46b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a46b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a46b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a46b8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a46b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a46bc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A46BCu;
    {
        const bool branch_taken_0x2a46bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a46bc) {
            ctx->pc = 0x2A46D0u;
            goto label_2a46d0;
        }
    }
    ctx->pc = 0x2A46C4u;
label_2a46c4:
    // 0x2a46c4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a46c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a46c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a46c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a46cc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a46ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2a46d0:
    // 0x2a46d0: 0x11000011  beqz        $t0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A46D0u;
    {
        const bool branch_taken_0x2a46d0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A46D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A46D0u;
        // 0x2a46d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a46d0) {
            ctx->pc = 0x2A4718u;
            goto label_2a4718;
        }
    }
    ctx->pc = 0x2A46D8u;
    // 0x2a46d8: 0x24a20060  addiu       $v0, $a1, 0x60
    ctx->pc = 0x2a46d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x2a46dc: 0xc28021  addu        $s0, $a2, $v0
    ctx->pc = 0x2a46dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2a46e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a46e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a46e4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2A46E4u;
    {
        const bool branch_taken_0x2a46e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A46E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A46E4u;
        // 0x2a46e8: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a46e4) {
            ctx->pc = 0x2A4714u;
            goto label_2a4714;
        }
    }
    ctx->pc = 0x2A46ECu;
    // 0x2a46ec: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2a46ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a46f0: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x2a46f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x2a46f4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A46F4u;
    {
        const bool branch_taken_0x2a46f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A46F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A46F4u;
        // 0x2a46f8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a46f4) {
            ctx->pc = 0x2A4714u;
            goto label_2a4714;
        }
    }
    ctx->pc = 0x2A46FCu;
    // 0x2a46fc: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2A46FCu;
    SET_GPR_U32(ctx, 31, 0x2A4704u);
    ctx->pc = 0x2A4700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A46FCu;
    // 0x2a4700: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2A46FCu, 0x2A4704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4704u;
label_2a4704:
    // 0x2a4704: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2a4704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a4708: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2a4708u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2a470c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2A470Cu;
    SET_GPR_U32(ctx, 31, 0x2A4714u);
    ctx->pc = 0x2A4710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A470Cu;
    // 0x2a4710: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2A470Cu, 0x2A4714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4714u;
label_2a4714:
    // 0x2a4714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a4714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a4718:
    // 0x2a4718: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a4718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a471c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A471Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A471Cu;
        // 0x2a4720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A471Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4724u;
    // 0x2a4724: 0x0  nop
    ctx->pc = 0x2a4724u;
    // NOP
    ctx->pc = 0x2a4728u;
}
