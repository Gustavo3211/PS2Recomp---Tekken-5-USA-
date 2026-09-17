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

// Function: sub_002E9780
// Address: 0x2e9780 - 0x2e9878
void sub_002E9780_0x2e9780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9780_0x2e9780");
#endif

    ctx->pc = 0x2e9780u;

    // 0x2e9780: 0x38a70001  xori        $a3, $a1, 0x1
    ctx->pc = 0x2e9780u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x2e9784: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9784u;
    {
        const bool branch_taken_0x2e9784 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9784u;
        // 0x2e9788: 0x8c860050  lw          $a2, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9784) {
            ctx->pc = 0x2E9798u;
            goto label_2e9798;
        }
    }
    ctx->pc = 0x2E978Cu;
    // 0x2e978c: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x2e978cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x2e9790: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9790u;
    {
        const bool branch_taken_0x2e9790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9790u;
        // 0x2e9794: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9790) {
            ctx->pc = 0x2E97A4u;
            goto label_2e97a4;
        }
    }
    ctx->pc = 0x2E9798u;
label_2e9798:
    // 0x2e9798: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x2e9798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x2e979c: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2e979cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2e97a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e97a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e97a4:
    // 0x2e97a4: 0xacc20080  sw          $v0, 0x80($a2)
    ctx->pc = 0x2e97a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 2));
    // 0x2e97a8: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x2e97a8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e97ac: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E97ACu;
    {
        const bool branch_taken_0x2e97ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E97B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97ACu;
        // 0x2e97b0: 0x8c86005c  lw          $a2, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e97ac) {
            ctx->pc = 0x2E97C0u;
            goto label_2e97c0;
        }
    }
    ctx->pc = 0x2E97B4u;
    // 0x2e97b4: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x2e97b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x2e97b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E97B8u;
    {
        const bool branch_taken_0x2e97b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E97BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97B8u;
        // 0x2e97bc: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e97b8) {
            ctx->pc = 0x2E97CCu;
            goto label_2e97cc;
        }
    }
    ctx->pc = 0x2E97C0u;
label_2e97c0:
    // 0x2e97c0: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x2e97c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x2e97c4: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2e97c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2e97c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e97c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e97cc:
    // 0x2e97cc: 0xacc20080  sw          $v0, 0x80($a2)
    ctx->pc = 0x2e97ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 2));
    // 0x2e97d0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E97D0u;
    {
        const bool branch_taken_0x2e97d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E97D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97D0u;
        // 0x2e97d4: 0x8c860054  lw          $a2, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e97d0) {
            ctx->pc = 0x2E97E8u;
            goto label_2e97e8;
        }
    }
    ctx->pc = 0x2E97D8u;
    // 0x2e97d8: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x2e97d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x2e97dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E97DCu;
    {
        const bool branch_taken_0x2e97dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E97E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97DCu;
        // 0x2e97e0: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e97dc) {
            ctx->pc = 0x2E97F4u;
            goto label_2e97f4;
        }
    }
    ctx->pc = 0x2E97E4u;
    // 0x2e97e4: 0x0  nop
    ctx->pc = 0x2e97e4u;
    // NOP
label_2e97e8:
    // 0x2e97e8: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x2e97e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x2e97ec: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2e97ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2e97f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e97f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e97f4:
    // 0x2e97f4: 0xacc20080  sw          $v0, 0x80($a2)
    ctx->pc = 0x2e97f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 2));
    // 0x2e97f8: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E97F8u;
    {
        const bool branch_taken_0x2e97f8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E97FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97F8u;
        // 0x2e97fc: 0x8c860060  lw          $a2, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e97f8) {
            ctx->pc = 0x2E9810u;
            goto label_2e9810;
        }
    }
    ctx->pc = 0x2E9800u;
    // 0x2e9800: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x2e9800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x2e9804: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9804u;
    {
        const bool branch_taken_0x2e9804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9804u;
        // 0x2e9808: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9804) {
            ctx->pc = 0x2E981Cu;
            goto label_2e981c;
        }
    }
    ctx->pc = 0x2E980Cu;
    // 0x2e980c: 0x0  nop
    ctx->pc = 0x2e980cu;
    // NOP
label_2e9810:
    // 0x2e9810: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x2e9810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x2e9814: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2e9814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2e9818: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e9818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e981c:
    // 0x2e981c: 0xacc20080  sw          $v0, 0x80($a2)
    ctx->pc = 0x2e981cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 2));
    // 0x2e9820: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9820u;
    {
        const bool branch_taken_0x2e9820 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9820u;
        // 0x2e9824: 0x8c860058  lw          $a2, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9820) {
            ctx->pc = 0x2E9838u;
            goto label_2e9838;
        }
    }
    ctx->pc = 0x2E9828u;
    // 0x2e9828: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x2e9828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x2e982c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E982Cu;
    {
        const bool branch_taken_0x2e982c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E982Cu;
        // 0x2e9830: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e982c) {
            ctx->pc = 0x2E9844u;
            goto label_2e9844;
        }
    }
    ctx->pc = 0x2E9834u;
    // 0x2e9834: 0x0  nop
    ctx->pc = 0x2e9834u;
    // NOP
label_2e9838:
    // 0x2e9838: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x2e9838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x2e983c: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2e983cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2e9840: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e9840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e9844:
    // 0x2e9844: 0xacc20080  sw          $v0, 0x80($a2)
    ctx->pc = 0x2e9844u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 2));
    // 0x2e9848: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9848u;
    {
        const bool branch_taken_0x2e9848 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9848u;
        // 0x2e984c: 0x8c840064  lw          $a0, 0x64($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9848) {
            ctx->pc = 0x2E9860u;
            goto label_2e9860;
        }
    }
    ctx->pc = 0x2E9850u;
    // 0x2e9850: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e9850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2e9854: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2e9854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2e9858: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9858u;
        // 0x2e985c: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9860u;
label_2e9860:
    // 0x2e9860: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e9860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2e9864: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2e9864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2e9868: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e9868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e986c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E986Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E986Cu;
        // 0x2e9870: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E986Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9874u;
    // 0x2e9874: 0x0  nop
    ctx->pc = 0x2e9874u;
    // NOP
    ctx->pc = 0x2e9878u;
}
