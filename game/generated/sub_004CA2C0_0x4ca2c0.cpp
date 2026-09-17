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

// Function: sub_004CA2C0
// Address: 0x4ca2c0 - 0x4ca350
void sub_004CA2C0_0x4ca2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CA2C0_0x4ca2c0");
#endif

    switch (ctx->pc) {
        case 0x4ca2c0u: goto label_4ca2c0;
        case 0x4ca2c4u: goto label_4ca2c4;
        case 0x4ca2c8u: goto label_4ca2c8;
        case 0x4ca2ccu: goto label_4ca2cc;
        case 0x4ca2d0u: goto label_4ca2d0;
        case 0x4ca2d4u: goto label_4ca2d4;
        case 0x4ca2d8u: goto label_4ca2d8;
        case 0x4ca2dcu: goto label_4ca2dc;
        case 0x4ca2e0u: goto label_4ca2e0;
        case 0x4ca2e4u: goto label_4ca2e4;
        case 0x4ca2e8u: goto label_4ca2e8;
        case 0x4ca2ecu: goto label_4ca2ec;
        case 0x4ca2f0u: goto label_4ca2f0;
        case 0x4ca2f4u: goto label_4ca2f4;
        case 0x4ca2f8u: goto label_4ca2f8;
        case 0x4ca2fcu: goto label_4ca2fc;
        case 0x4ca300u: goto label_4ca300;
        case 0x4ca304u: goto label_4ca304;
        case 0x4ca308u: goto label_4ca308;
        case 0x4ca30cu: goto label_4ca30c;
        case 0x4ca310u: goto label_4ca310;
        case 0x4ca314u: goto label_4ca314;
        case 0x4ca318u: goto label_4ca318;
        case 0x4ca31cu: goto label_4ca31c;
        case 0x4ca320u: goto label_4ca320;
        case 0x4ca324u: goto label_4ca324;
        case 0x4ca328u: goto label_4ca328;
        case 0x4ca32cu: goto label_4ca32c;
        case 0x4ca330u: goto label_4ca330;
        case 0x4ca334u: goto label_4ca334;
        case 0x4ca338u: goto label_4ca338;
        case 0x4ca33cu: goto label_4ca33c;
        case 0x4ca340u: goto label_4ca340;
        case 0x4ca344u: goto label_4ca344;
        case 0x4ca348u: goto label_4ca348;
        case 0x4ca34cu: goto label_4ca34c;
        default: break;
    }

    ctx->pc = 0x4ca2c0u;

label_4ca2c0:
    // 0x4ca2c0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ca2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4ca2c4:
    // 0x4ca2c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ca2c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4ca2c8:
    // 0x4ca2c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ca2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ca2cc:
    // 0x4ca2cc: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ca2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4ca2d0:
    // 0x4ca2d0: 0x8c460f78  lw          $a2, 0xF78($v0)
    ctx->pc = 0x4ca2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3960)));
label_4ca2d4:
    // 0x4ca2d4: 0x24a50f60  addiu       $a1, $a1, 0xF60
    ctx->pc = 0x4ca2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3936));
label_4ca2d8:
    // 0x4ca2d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4ca2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4ca2dc:
    // 0x4ca2dc: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4ca2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_4ca2e0:
    // 0x4ca2e0: 0x84c20160  lh          $v0, 0x160($a2)
    ctx->pc = 0x4ca2e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 352)));
label_4ca2e4:
    // 0x4ca2e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ca2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4ca2e8:
    // 0x4ca2e8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ca2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_4ca2ec:
    // 0x4ca2ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ca2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4ca2f0:
    // 0x4ca2f0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ca2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4ca2f4:
    // 0x4ca2f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ca2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4ca2f8:
    // 0x4ca2f8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ca2f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4ca2fc:
    // 0x4ca2fc: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x4ca2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_4ca300:
    // 0x4ca300: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ca300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4ca304:
    // 0x4ca304: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ca304u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4ca308:
    // 0x4ca308: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ca308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_4ca30c:
    // 0x4ca30c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ca30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4ca310:
    // 0x4ca310: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ca310u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4ca314:
    // 0x4ca314: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4ca314u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4ca318:
    // 0x4ca318: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4ca31c:
    if (ctx->pc == 0x4CA31Cu) {
        ctx->pc = 0x4CA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA318u;
        // 0x4ca31c: 0x24830168  addiu       $v1, $a0, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CA320u;
        goto label_4ca320;
    }
    ctx->pc = 0x4CA318u;
    {
        const bool branch_taken_0x4ca318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA318u;
        // 0x4ca31c: 0x24830168  addiu       $v1, $a0, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca318) {
            ctx->pc = 0x4CA328u;
            goto label_4ca328;
        }
    }
    ctx->pc = 0x4CA320u;
label_4ca320:
    // 0x4ca320: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x4ca320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4ca324:
    // 0x4ca324: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4ca324u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4ca328:
    // 0x4ca328: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x4ca328u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4ca32c:
    // 0x4ca32c: 0x2c62000d  sltiu       $v0, $v1, 0xD
    ctx->pc = 0x4ca32cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_4ca330:
    // 0x4ca330: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_4ca334:
    if (ctx->pc == 0x4CA334u) {
        ctx->pc = 0x4CA334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA330u;
        // 0x4ca334: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CA338u;
        goto label_4ca338;
    }
    ctx->pc = 0x4CA330u;
    {
        const bool branch_taken_0x4ca330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CA334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA330u;
        // 0x4ca334: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca330) {
            ctx->pc = 0x4CA3C4u;
            return;
        }
    }
    ctx->pc = 0x4CA338u;
label_4ca338:
    // 0x4ca338: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4ca338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4ca33c:
    // 0x4ca33c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4ca33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4ca340:
    // 0x4ca340: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ca340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4ca344:
    // 0x4ca344: 0x8c63b5f0  lw          $v1, -0x4A10($v1)
    ctx->pc = 0x4ca344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948336)));
label_4ca348:
    // 0x4ca348: 0x600008  jr          $v1
label_4ca34c:
    if (ctx->pc == 0x4CA34Cu) {
        ctx->pc = 0x4CA350u;
        goto label_fallthrough_0x4ca348;
    }
    ctx->pc = 0x4CA348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CA348u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x4ca348:
    ctx->pc = 0x4CA350u;
}
