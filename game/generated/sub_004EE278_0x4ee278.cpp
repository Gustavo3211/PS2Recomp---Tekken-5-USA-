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

// Function: sub_004EE278
// Address: 0x4ee278 - 0x4ee2c8
void sub_004EE278_0x4ee278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE278_0x4ee278");
#endif

    ctx->pc = 0x4ee278u;

    // 0x4ee278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ee278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ee27c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ee27cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ee280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ee280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ee284: 0x244601bc  addiu       $a2, $v0, 0x1BC
    ctx->pc = 0x4ee284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
    // 0x4ee288: 0x2442014a  addiu       $v0, $v0, 0x14A
    ctx->pc = 0x4ee288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 330));
    // 0x4ee28c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4ee28cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ee290: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4ee290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4ee294: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4ee294u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ee298: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4EE298u;
    {
        const bool branch_taken_0x4ee298 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4EE29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE298u;
        // 0x4ee29c: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee298) {
            ctx->pc = 0x4EE2B0u;
            goto label_4ee2b0;
        }
    }
    ctx->pc = 0x4EE2A0u;
    // 0x4ee2a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ee2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ee2a4: 0x813b9d6  j           func_4EE758
    ctx->pc = 0x4EE2A4u;
    ctx->pc = 0x4EE2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE2A4u;
    // 0x4ee2a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE758u;
    sub_004EE758_0x4ee758(rdram, ctx, runtime); return;
    ctx->pc = 0x4EE2ACu;
    // 0x4ee2ac: 0x0  nop
    ctx->pc = 0x4ee2acu;
    // NOP
label_4ee2b0:
    // 0x4ee2b0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4ee2b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ee2b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ee2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ee2b8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ee2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ee2bc: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4ee2bcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ee2c0: 0x813b9d6  j           func_4EE758
    ctx->pc = 0x4EE2C0u;
    ctx->pc = 0x4EE2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE2C0u;
    // 0x4ee2c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE758u;
    sub_004EE758_0x4ee758(rdram, ctx, runtime); return;
    ctx->pc = 0x4EE2C8u;
}
