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

// Function: sub_004B11E0
// Address: 0x4b11e0 - 0x4b1248
void sub_004B11E0_0x4b11e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B11E0_0x4b11e0");
#endif

    switch (ctx->pc) {
        case 0x4b11e0u: goto label_4b11e0;
        case 0x4b11e4u: goto label_4b11e4;
        case 0x4b11e8u: goto label_4b11e8;
        case 0x4b11ecu: goto label_4b11ec;
        case 0x4b11f0u: goto label_4b11f0;
        case 0x4b11f4u: goto label_4b11f4;
        case 0x4b11f8u: goto label_4b11f8;
        case 0x4b11fcu: goto label_4b11fc;
        case 0x4b1200u: goto label_4b1200;
        case 0x4b1204u: goto label_4b1204;
        case 0x4b1208u: goto label_4b1208;
        case 0x4b120cu: goto label_4b120c;
        case 0x4b1210u: goto label_4b1210;
        case 0x4b1214u: goto label_4b1214;
        case 0x4b1218u: goto label_4b1218;
        case 0x4b121cu: goto label_4b121c;
        case 0x4b1220u: goto label_4b1220;
        case 0x4b1224u: goto label_4b1224;
        case 0x4b1228u: goto label_4b1228;
        case 0x4b122cu: goto label_4b122c;
        case 0x4b1230u: goto label_4b1230;
        case 0x4b1234u: goto label_4b1234;
        case 0x4b1238u: goto label_4b1238;
        case 0x4b123cu: goto label_4b123c;
        case 0x4b1240u: goto label_4b1240;
        case 0x4b1244u: goto label_4b1244;
        default: break;
    }

    ctx->pc = 0x4b11e0u;

label_4b11e0:
    // 0x4b11e0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b11e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4b11e4:
    // 0x4b11e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b11e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4b11e8:
    // 0x4b11e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b11e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4b11ec:
    // 0x4b11ec: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b11ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4b11f0:
    // 0x4b11f0: 0x8c460d60  lw          $a2, 0xD60($v0)
    ctx->pc = 0x4b11f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
label_4b11f4:
    // 0x4b11f4: 0x24a50d30  addiu       $a1, $a1, 0xD30
    ctx->pc = 0x4b11f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3376));
label_4b11f8:
    // 0x4b11f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4b11f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4b11fc:
    // 0x4b11fc: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4b11fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_4b1200:
    // 0x4b1200: 0x84c20164  lh          $v0, 0x164($a2)
    ctx->pc = 0x4b1200u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 356)));
label_4b1204:
    // 0x4b1204: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b1204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4b1208:
    // 0x4b1208: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4b1208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_4b120c:
    // 0x4b120c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b120cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4b1210:
    // 0x4b1210: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4b1210u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4b1214:
    // 0x4b1214: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4b1214u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4b1218:
    // 0x4b1218: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b1218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4b121c:
    // 0x4b121c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4b121cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4b1220:
    // 0x4b1220: 0x2c430009  sltiu       $v1, $v0, 0x9
    ctx->pc = 0x4b1220u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_4b1224:
    // 0x4b1224: 0x5060002c  beql        $v1, $zero, . + 4 + (0x2C << 2)
label_4b1228:
    if (ctx->pc == 0x4B1228u) {
        ctx->pc = 0x4B1228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1224u;
        // 0x4b1228: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B122Cu;
        goto label_4b122c;
    }
    ctx->pc = 0x4B1224u;
    {
        const bool branch_taken_0x4b1224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b1224) {
            ctx->pc = 0x4B1228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1224u;
            // 0x4b1228: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B12D8u;
            return;
        }
    }
    ctx->pc = 0x4B122Cu;
label_4b122c:
    // 0x4b122c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4b122cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4b1230:
    // 0x4b1230: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4b1230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4b1234:
    // 0x4b1234: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b1234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4b1238:
    // 0x4b1238: 0x8c63b2b0  lw          $v1, -0x4D50($v1)
    ctx->pc = 0x4b1238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947504)));
label_4b123c:
    // 0x4b123c: 0x600008  jr          $v1
label_4b1240:
    if (ctx->pc == 0x4B1240u) {
        ctx->pc = 0x4B1244u;
        goto label_4b1244;
    }
    ctx->pc = 0x4B123Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B123Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4B1244u;
label_4b1244:
    // 0x4b1244: 0x0  nop
    ctx->pc = 0x4b1244u;
    // NOP
    ctx->pc = 0x4b1248u;
}
