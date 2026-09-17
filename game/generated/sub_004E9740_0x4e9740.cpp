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

// Function: sub_004E9740
// Address: 0x4e9740 - 0x4e9798
void sub_004E9740_0x4e9740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9740_0x4e9740");
#endif

    ctx->pc = 0x4e9740u;

    // 0x4e9740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e9740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e9744: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4e9744u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4e9748: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e9748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e974c: 0x24e711ec  addiu       $a3, $a3, 0x11EC
    ctx->pc = 0x4e974cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4588));
    // 0x4e9750: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4e9750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4e9754: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4e9754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4e9758: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e9758u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11ECu));
    // 0x4e975c: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x4e975cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x4e9760: 0x3c02000b  lui         $v0, 0xB
    ctx->pc = 0x4e9760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11 << 16));
    // 0x4e9764: 0x248411f4  addiu       $a0, $a0, 0x11F4
    ctx->pc = 0x4e9764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4596));
    // 0x4e9768: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e9768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e976c: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x4e976cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x4e9770: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4e9770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4e9774: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x4e9774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4e9778: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4e9778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4e977c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4e977cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4e9780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e9780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e9784: 0x84860000  lh          $a2, 0x0($a0)
    ctx->pc = 0x4e9784u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e9788: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x4e9788u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e978c: 0x8123b78  j           func_48EDE0
    ctx->pc = 0x4E978Cu;
    ctx->pc = 0x4E9790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E978Cu;
    // 0x4e9790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EDE0u;
    sub_0048EDE0_0x48ede0(rdram, ctx, runtime); return;
    ctx->pc = 0x4E9794u;
    // 0x4e9794: 0x0  nop
    ctx->pc = 0x4e9794u;
    // NOP
    ctx->pc = 0x4e9798u;
}
