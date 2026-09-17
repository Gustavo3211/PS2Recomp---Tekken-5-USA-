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

// Function: entry_110380
// Address: 0x110380 - 0x110418
void entry_110380_0x110418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_110380_0x110418");
#endif

    switch (ctx->pc) {
        case 0x110394u: goto label_110394;
        case 0x1103a8u: goto label_1103a8;
        case 0x110404u: goto label_110404;
        default: break;
    }

    ctx->pc = 0x110380u;

    // 0x110380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x110380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x110384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x110384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x110388: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x110388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11038c: 0x2403ffd1  addiu       $v1, $zero, -0x2F
    ctx->pc = 0x11038cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x110390: 0xc  syscall     0
    ctx->pc = 0x110390u;
    ctx->pc = 0x110394u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_110394:
    // 0x110394: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x110394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110398: 0x12040005  beq         $s0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110398u;
    {
        const bool branch_taken_0x110398 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x11039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110398u;
        // 0x11039c: 0x2e020100  sltiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110398) {
            ctx->pc = 0x1103B0u;
            goto label_1103b0;
        }
    }
    ctx->pc = 0x1103A0u;
    // 0x1103a0: 0xc043cc8  jal         func_10F320
    ctx->pc = 0x1103A0u;
    SET_GPR_U32(ctx, 31, 0x1103A8u);
    ctx->pc = 0x10F320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F320u, 0x1103A0u, 0x1103A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1103A8u;
label_1103a8:
    // 0x1103a8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1103A8u;
    {
        const bool branch_taken_0x1103a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1103ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103A8u;
        // 0x1103ac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1103a8) {
            ctx->pc = 0x11040Cu;
            goto label_11040c;
        }
    }
    ctx->pc = 0x1103B0u;
label_1103b0:
    // 0x1103b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1103B0u;
    {
        const bool branch_taken_0x1103b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1103B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103B0u;
        // 0x1103b4: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1103b0) {
            ctx->pc = 0x1103C4u;
            goto label_1103c4;
        }
    }
    ctx->pc = 0x1103B8u;
    // 0x1103b8: 0x8c431100  lw          $v1, 0x1100($v0)
    ctx->pc = 0x1103b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4352)));
    // 0x1103bc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1103BCu;
    {
        const bool branch_taken_0x1103bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1103C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103BCu;
        // 0x1103c0: 0x3c03001e  lui         $v1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1103bc) {
            ctx->pc = 0x1103CCu;
            goto label_1103cc;
        }
    }
    ctx->pc = 0x1103C4u;
label_1103c4:
    // 0x1103c4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1103C4u;
    {
        const bool branch_taken_0x1103c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1103C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103C4u;
        // 0x1103c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1103c4) {
            ctx->pc = 0x110408u;
            goto label_110408;
        }
    }
    ctx->pc = 0x1103CCu;
label_1103cc:
    // 0x1103cc: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1103ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1103d0: 0x24637f48  addiu       $v1, $v1, 0x7F48
    ctx->pc = 0x1103d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32584));
    // 0x1103d4: 0x8ca47f40  lw          $a0, 0x7F40($a1)
    ctx->pc = 0x1103d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1E7F40u));
    // 0x1103d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1103d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1103dc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1103dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1103e0: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x1103e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x1103e4: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1103e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1103e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1103e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1103ec: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1103ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1103f0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1103f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1103f4: 0xa0a70008  sb          $a3, 0x8($a1)
    ctx->pc = 0x1103f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x1103f8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1103f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1103fc: 0xc043cf4  jal         func_10F3D0
    ctx->pc = 0x1103FCu;
    SET_GPR_U32(ctx, 31, 0x110404u);
    ctx->pc = 0x110400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1103FCu;
    // 0x110400: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3D0u, 0x1103FCu, 0x110404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110404u;
label_110404:
    // 0x110404: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x110404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_110408:
    // 0x110408: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x110408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11040c:
    // 0x11040c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11040cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110410: 0x3e00008  jr          $ra
    ctx->pc = 0x110410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110410u;
        // 0x110414: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110418u;
}
