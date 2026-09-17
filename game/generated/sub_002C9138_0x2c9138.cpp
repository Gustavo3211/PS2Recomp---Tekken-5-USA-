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

// Function: sub_002C9138
// Address: 0x2c9138 - 0x2c9170
void sub_002C9138_0x2c9138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9138_0x2c9138");
#endif

    ctx->pc = 0x2c9138u;

    // 0x2c9138: 0x24840034  addiu       $a0, $a0, 0x34
    ctx->pc = 0x2c9138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x2c913c: 0x84820008  lh          $v0, 0x8($a0)
    ctx->pc = 0x2c913cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c9140: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C9140u;
    {
        const bool branch_taken_0x2c9140 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2c9140) {
            ctx->pc = 0x2C9144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9140u;
            // 0x2c9144: 0xa4800008  sh          $zero, 0x8($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9148u;
            goto label_2c9148;
        }
    }
    ctx->pc = 0x2C9148u;
label_2c9148:
    // 0x2c9148: 0x9082000a  lbu         $v0, 0xA($a0)
    ctx->pc = 0x2c9148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x2c914c: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x2c914cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x2c9150: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C9150u;
    {
        const bool branch_taken_0x2c9150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9150) {
            ctx->pc = 0x2C9154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9150u;
            // 0x2c9154: 0xa080000a  sb          $zero, 0xA($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9158u;
            goto label_2c9158;
        }
    }
    ctx->pc = 0x2C9158u;
label_2c9158:
    // 0x2c9158: 0x9082000c  lbu         $v0, 0xC($a0)
    ctx->pc = 0x2c9158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2c915c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2c915cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2c9160: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C9160u;
    {
        const bool branch_taken_0x2c9160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9160) {
            ctx->pc = 0x2C9164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9160u;
            // 0x2c9164: 0xa080000c  sb          $zero, 0xC($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9168u;
            goto label_2c9168;
        }
    }
    ctx->pc = 0x2C9168u;
label_2c9168:
    // 0x2c9168: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9170u;
}
