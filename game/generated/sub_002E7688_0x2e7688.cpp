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

// Function: sub_002E7688
// Address: 0x2e7688 - 0x2e7728
void sub_002E7688_0x2e7688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7688_0x2e7688");
#endif

    switch (ctx->pc) {
        case 0x2e769cu: goto label_2e769c;
        case 0x2e76b0u: goto label_2e76b0;
        case 0x2e76f0u: goto label_2e76f0;
        default: break;
    }

    ctx->pc = 0x2e7688u;

    // 0x2e7688: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e7688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e768c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e768cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e7690: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e7690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e7694: 0xc0bbc28  jal         func_2EF0A0
    ctx->pc = 0x2E7694u;
    SET_GPR_U32(ctx, 31, 0x2E769Cu);
    ctx->pc = 0x2E7698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7694u;
    // 0x2e7698: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF0A0u, 0x2E7694u, 0x2E769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E769Cu;
label_2e769c:
    // 0x2e769c: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x2e769cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2e76a0: 0x18a0000e  blez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2E76A0u;
    {
        const bool branch_taken_0x2e76a0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2E76A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E76A0u;
        // 0x2e76a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e76a0) {
            ctx->pc = 0x2E76DCu;
            goto label_2e76dc;
        }
    }
    ctx->pc = 0x2E76A8u;
    // 0x2e76a8: 0x2406efff  addiu       $a2, $zero, -0x1001
    ctx->pc = 0x2e76a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2e76ac: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2e76acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2e76b0:
    // 0x2e76b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2e76b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2e76b4: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x2e76b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2e76b8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E76B8u;
    {
        const bool branch_taken_0x2e76b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E76BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E76B8u;
        // 0x2e76bc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e76b8) {
            ctx->pc = 0x2E76D0u;
            goto label_2e76d0;
        }
    }
    ctx->pc = 0x2E76C0u;
    // 0x2e76c0: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e76c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2e76c4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2e76c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2e76c8: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2e76c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2e76cc: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x2e76ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2e76d0:
    // 0x2e76d0: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x2e76d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2e76d4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2E76D4u;
    {
        const bool branch_taken_0x2e76d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E76D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E76D4u;
        // 0x2e76d8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e76d4) {
            ctx->pc = 0x2E76B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e76b0;
        }
    }
    ctx->pc = 0x2E76DCu;
label_2e76dc:
    // 0x2e76dc: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x2e76dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2e76e0: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2E76E0u;
    {
        const bool branch_taken_0x2e76e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e76e0) {
            ctx->pc = 0x2E76E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E76E0u;
            // 0x2e76e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E771Cu;
            goto label_2e771c;
        }
    }
    ctx->pc = 0x2E76E8u;
    // 0x2e76e8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2e76e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e76ec: 0x0  nop
    ctx->pc = 0x2e76ecu;
    // NOP
label_2e76f0:
    // 0x2e76f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e76f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e76f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2e76f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2e76f8: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x2e76f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2e76fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E76FCu;
    {
        const bool branch_taken_0x2e76fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E76FCu;
        // 0x2e7700: 0x28850010  slti        $a1, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e76fc) {
            ctx->pc = 0x2E7710u;
            goto label_2e7710;
        }
    }
    ctx->pc = 0x2E7704u;
    // 0x2e7704: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e7704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2e7708: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2e7708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2e770c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2e770cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2e7710:
    // 0x2e7710: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E7710u;
    {
        const bool branch_taken_0x2e7710 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7710u;
        // 0x2e7714: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7710) {
            ctx->pc = 0x2E76F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e76f0;
        }
    }
    ctx->pc = 0x2E7718u;
    // 0x2e7718: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e7718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e771c:
    // 0x2e771c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e771cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e7720: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7720u;
        // 0x2e7724: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7728u;
}
