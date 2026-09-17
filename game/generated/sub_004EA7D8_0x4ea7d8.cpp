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

// Function: sub_004EA7D8
// Address: 0x4ea7d8 - 0x4ea840
void sub_004EA7D8_0x4ea7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EA7D8_0x4ea7d8");
#endif

    ctx->pc = 0x4ea7d8u;

    // 0x4ea7d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ea7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ea7dc: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4ea7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4ea7e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ea7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ea7e4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4ea7e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea7e8: 0x24c611e8  addiu       $a2, $a2, 0x11E8
    ctx->pc = 0x4ea7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4584));
    // 0x4ea7ec: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4ea7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4ea7f0: 0x84e5011c  lh          $a1, 0x11C($a3)
    ctx->pc = 0x4ea7f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 284)));
    // 0x4ea7f4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4ea7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F11E8u));
    // 0x4ea7f8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4ea7f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4ea7fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ea7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ea800: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4ea800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4ea804: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4ea804u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4ea808: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4ea808u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ea80c: 0x84e2015c  lh          $v0, 0x15C($a3)
    ctx->pc = 0x4ea80cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 348)));
    // 0x4ea810: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4EA810u;
    {
        const bool branch_taken_0x4ea810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4EA814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA810u;
        // 0x4ea814: 0x24e801bc  addiu       $t0, $a3, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea810) {
            ctx->pc = 0x4EA828u;
            goto label_4ea828;
        }
    }
    ctx->pc = 0x4EA818u;
    // 0x4ea818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ea818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ea81c: 0x813ab16  j           func_4EAC58
    ctx->pc = 0x4EA81Cu;
    ctx->pc = 0x4EA820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA81Cu;
    // 0x4ea820: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EAC58u;
    sub_004EAC58_0x4eac58(rdram, ctx, runtime); return;
    ctx->pc = 0x4EA824u;
    // 0x4ea824: 0x0  nop
    ctx->pc = 0x4ea824u;
    // NOP
label_4ea828:
    // 0x4ea828: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4ea828u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ea82c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ea82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ea830: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ea830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ea834: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4ea834u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ea838: 0x813aa10  j           func_4EA840
    ctx->pc = 0x4EA838u;
    ctx->pc = 0x4EA83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA838u;
    // 0x4ea83c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA840u;
    sub_004EA840_0x4ea840(rdram, ctx, runtime); return;
    ctx->pc = 0x4EA840u;
}
