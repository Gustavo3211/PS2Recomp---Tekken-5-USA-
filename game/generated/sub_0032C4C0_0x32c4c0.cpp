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

// Function: sub_0032C4C0
// Address: 0x32c4c0 - 0x32c548
void sub_0032C4C0_0x32c4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C4C0_0x32c4c0");
#endif

    switch (ctx->pc) {
        case 0x32c4f8u: goto label_32c4f8;
        default: break;
    }

    ctx->pc = 0x32c4c0u;

    // 0x32c4c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32c4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32c4c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x32c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32c4c8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x32c4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32c4cc: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x32c4ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c4d0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x32c4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x32c4d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32c4d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c4d8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x32c4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x32c4dc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x32c4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c4e0: 0x10a40012  beq         $a1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x32C4E0u;
    {
        const bool branch_taken_0x32c4e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x32C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C4E0u;
        // 0x32c4e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c4e0) {
            ctx->pc = 0x32C52Cu;
            goto label_32c52c;
        }
    }
    ctx->pc = 0x32C4E8u;
    // 0x32c4e8: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x32c4e8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c4ec: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x32c4ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x32c4f0: 0x27ab0020  addiu       $t3, $sp, 0x20
    ctx->pc = 0x32c4f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32c4f4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x32c4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_32c4f8:
    // 0x32c4f8: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x32c4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x32c4fc: 0xe3282b  sltu        $a1, $a3, $v1
    ctx->pc = 0x32c4fcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x32c500: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x32c500u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x32c504: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x32c504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c508: 0x65380b  movn        $a3, $v1, $a1
    ctx->pc = 0x32c508u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x32c50c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x32c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32c510: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x32c510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x32c514: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x32c514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x32c518: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x32c518u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x32c51c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x32c51cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c520: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x32c520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x32c524: 0x54a2fff4  bnel        $a1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x32C524u;
    {
        const bool branch_taken_0x32c524 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x32c524) {
            ctx->pc = 0x32C528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C524u;
            // 0x32c528: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32c4f8;
        }
    }
    ctx->pc = 0x32C52Cu;
label_32c52c:
    // 0x32c52c: 0x55400001  bnel        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x32C52Cu;
    {
        const bool branch_taken_0x32c52c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c52c) {
            ctx->pc = 0x32C530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C52Cu;
            // 0x32c530: 0xad490000  sw          $t1, 0x0($t2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C534u;
            goto label_32c534;
        }
    }
    ctx->pc = 0x32C534u;
label_32c534:
    // 0x32c534: 0x54c00001  bnel        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x32C534u;
    {
        const bool branch_taken_0x32c534 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c534) {
            ctx->pc = 0x32C538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C534u;
            // 0x32c538: 0xacc70000  sw          $a3, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C53Cu;
            goto label_32c53c;
        }
    }
    ctx->pc = 0x32C53Cu;
label_32c53c:
    // 0x32c53c: 0x3e00008  jr          $ra
    ctx->pc = 0x32C53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C53Cu;
        // 0x32c540: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C544u;
    // 0x32c544: 0x0  nop
    ctx->pc = 0x32c544u;
    // NOP
    ctx->pc = 0x32c548u;
}
