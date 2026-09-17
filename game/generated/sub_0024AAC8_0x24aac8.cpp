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

// Function: sub_0024AAC8
// Address: 0x24aac8 - 0x24aae0
void sub_0024AAC8_0x24aac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AAC8_0x24aac8");
#endif

    ctx->pc = 0x24aac8u;

    // 0x24aac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24aac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24aacc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x24aaccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aad0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x24aad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aad4: 0x8092a56  j           func_24A958
    ctx->pc = 0x24AAD4u;
    ctx->pc = 0x24AAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AAD4u;
    // 0x24aad8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A958u;
    sub_0024A958_0x24a958(rdram, ctx, runtime); return;
    ctx->pc = 0x24AADCu;
    // 0x24aadc: 0x0  nop
    ctx->pc = 0x24aadcu;
    // NOP
    ctx->pc = 0x24aae0u;
}
