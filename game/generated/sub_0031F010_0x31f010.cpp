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

// Function: sub_0031F010
// Address: 0x31f010 - 0x31f058
void sub_0031F010_0x31f010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F010_0x31f010");
#endif

    ctx->pc = 0x31f010u;

    // 0x31f010: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x31f010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f014: 0x94e20400  lhu         $v0, 0x400($a3)
    ctx->pc = 0x31f014u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 1024)));
    // 0x31f018: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x31F018u;
    {
        const bool branch_taken_0x31f018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f018) {
            ctx->pc = 0x31F04Cu;
            goto label_31f04c;
        }
    }
    ctx->pc = 0x31F020u;
    // 0x31f020: 0x94e20402  lhu         $v0, 0x402($a3)
    ctx->pc = 0x31f020u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 1026)));
    // 0x31f024: 0x94e6040c  lhu         $a2, 0x40C($a3)
    ctx->pc = 0x31f024u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 1036)));
    // 0x31f028: 0x94e30408  lhu         $v1, 0x408($a3)
    ctx->pc = 0x31f028u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 1032)));
    // 0x31f02c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x31f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x31f030: 0x94e4040a  lhu         $a0, 0x40A($a3)
    ctx->pc = 0x31f030u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 1034)));
    // 0x31f034: 0x94e5040e  lhu         $a1, 0x40E($a3)
    ctx->pc = 0x31f034u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 1038)));
    // 0x31f038: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31f038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31f03c: 0xa4e40400  sh          $a0, 0x400($a3)
    ctx->pc = 0x31f03cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 1024), (uint16_t)GPR_U32(ctx, 4));
    // 0x31f040: 0xa4e50404  sh          $a1, 0x404($a3)
    ctx->pc = 0x31f040u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 1028), (uint16_t)GPR_U32(ctx, 5));
    // 0x31f044: 0xa4e30408  sh          $v1, 0x408($a3)
    ctx->pc = 0x31f044u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 1032), (uint16_t)GPR_U32(ctx, 3));
    // 0x31f048: 0xa4e60402  sh          $a2, 0x402($a3)
    ctx->pc = 0x31f048u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 1026), (uint16_t)GPR_U32(ctx, 6));
label_31f04c:
    // 0x31f04c: 0x3e00008  jr          $ra
    ctx->pc = 0x31F04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F054u;
    // 0x31f054: 0x0  nop
    ctx->pc = 0x31f054u;
    // NOP
    ctx->pc = 0x31f058u;
}
