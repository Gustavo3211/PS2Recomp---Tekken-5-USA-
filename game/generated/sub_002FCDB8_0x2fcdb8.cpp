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

// Function: sub_002FCDB8
// Address: 0x2fcdb8 - 0x2fce08
void sub_002FCDB8_0x2fcdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCDB8_0x2fcdb8");
#endif

    ctx->pc = 0x2fcdb8u;

    // 0x2fcdb8: 0x9082000e  lbu         $v0, 0xE($a0)
    ctx->pc = 0x2fcdb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x2fcdbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fcdbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcdc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fcdc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcdc4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FCDC4u;
    {
        const bool branch_taken_0x2fcdc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCDC4u;
        // 0x2fcdc8: 0x2c430002  sltiu       $v1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcdc4) {
            ctx->pc = 0x2FCDECu;
            goto label_2fcdec;
        }
    }
    ctx->pc = 0x2FCDCCu;
    // 0x2fcdcc: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FCDCCu;
    {
        const bool branch_taken_0x2fcdcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fcdcc) {
            ctx->pc = 0x2FCDD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCDCCu;
            // 0x2fcdd0: 0x9082000f  lbu         $v0, 0xF($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCDE0u;
            goto label_2fcde0;
        }
    }
    ctx->pc = 0x2FCDD4u;
    // 0x2fcdd4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2FCDD4u;
    {
        const bool branch_taken_0x2fcdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCDD4u;
        // 0x2fcdd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcdd4) {
            ctx->pc = 0x2FCDFCu;
            goto label_2fcdfc;
        }
    }
    ctx->pc = 0x2FCDDCu;
    // 0x2fcddc: 0x0  nop
    ctx->pc = 0x2fcddcu;
    // NOP
label_2fcde0:
    // 0x2fcde0: 0x2c430005  sltiu       $v1, $v0, 0x5
    ctx->pc = 0x2fcde0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2fcde4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FCDE4u;
    {
        const bool branch_taken_0x2fcde4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCDE4u;
        // 0x2fcde8: 0x2c420006  sltiu       $v0, $v0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcde4) {
            ctx->pc = 0x2FCDF8u;
            goto label_2fcdf8;
        }
    }
    ctx->pc = 0x2FCDECu;
label_2fcdec:
    // 0x2fcdec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCDECu;
    {
        const bool branch_taken_0x2fcdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCDECu;
        // 0x2fcdf0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcdec) {
            ctx->pc = 0x2FCDFCu;
            goto label_2fcdfc;
        }
    }
    ctx->pc = 0x2FCDF4u;
    // 0x2fcdf4: 0x0  nop
    ctx->pc = 0x2fcdf4u;
    // NOP
label_2fcdf8:
    // 0x2fcdf8: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x2fcdf8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2fcdfc:
    // 0x2fcdfc: 0x2ca20001  sltiu       $v0, $a1, 0x1
    ctx->pc = 0x2fcdfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2fce00: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCE00u;
        // 0x2fce04: 0x6100b  movn        $v0, $zero, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCE08u;
}
