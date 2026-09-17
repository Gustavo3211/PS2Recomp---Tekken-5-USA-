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

// Function: sub_004EE938
// Address: 0x4ee938 - 0x4ee978
void sub_004EE938_0x4ee938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE938_0x4ee938");
#endif

    ctx->pc = 0x4ee938u;

    // 0x4ee938: 0x2482014a  addiu       $v0, $a0, 0x14A
    ctx->pc = 0x4ee938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 330));
    // 0x4ee93c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ee93cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ee940: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4ee940u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ee944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ee944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ee948: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4ee948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4ee94c: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4ee94cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ee950: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4EE950u;
    {
        const bool branch_taken_0x4ee950 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4EE954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE950u;
        // 0x4ee954: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee950) {
            ctx->pc = 0x4EE968u;
            goto label_4ee968;
        }
    }
    ctx->pc = 0x4EE958u;
    // 0x4ee958: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ee958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ee95c: 0x813bcb8  j           func_4EF2E0
    ctx->pc = 0x4EE95Cu;
    ctx->pc = 0x4EE960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE95Cu;
    // 0x4ee960: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF2E0u;
    sub_004EF2E0_0x4ef2e0(rdram, ctx, runtime); return;
    ctx->pc = 0x4EE964u;
    // 0x4ee964: 0x0  nop
    ctx->pc = 0x4ee964u;
    // NOP
label_4ee968:
    // 0x4ee968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ee968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ee96c: 0x813bcb2  j           func_4EF2C8
    ctx->pc = 0x4EE96Cu;
    ctx->pc = 0x4EE970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE96Cu;
    // 0x4ee970: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF2C8u;
    sub_004EF2C8_0x4ef2c8(rdram, ctx, runtime); return;
    ctx->pc = 0x4EE974u;
    // 0x4ee974: 0x0  nop
    ctx->pc = 0x4ee974u;
    // NOP
    ctx->pc = 0x4ee978u;
}
