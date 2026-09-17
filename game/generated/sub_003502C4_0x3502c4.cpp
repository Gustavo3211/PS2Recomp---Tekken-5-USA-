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

// Function: sub_003502C4
// Address: 0x3502c4 - 0x3504bc
void sub_003502C4_0x3502c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003502C4_0x3502c4");
#endif

    switch (ctx->pc) {
        case 0x3502ecu: goto label_3502ec;
        case 0x35036cu: goto label_35036c;
        case 0x3503dcu: goto label_3503dc;
        case 0x35041cu: goto label_35041c;
        case 0x35047cu: goto label_35047c;
        case 0x3504a4u: goto label_3504a4;
        default: break;
    }

    ctx->pc = 0x3502c4u;

    // 0x3502c4: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3502c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3502c8: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x3502c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x3502cc: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x3502ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x3502d0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3502d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3502d4: 0xaf80cbd4  sw          $zero, -0x342C($gp)
    ctx->pc = 0x3502d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953940), GPR_U32(ctx, 0));
    // 0x3502d8: 0xaf80cbd8  sw          $zero, -0x3428($gp)
    ctx->pc = 0x3502d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953944), GPR_U32(ctx, 0));
    // 0x3502dc: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x3502dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x3502e0: 0x2442c300  addiu       $v0, $v0, -0x3D00
    ctx->pc = 0x3502e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951680));
    // 0x3502e4: 0xaf82cbdc  sw          $v0, -0x3424($gp)
    ctx->pc = 0x3502e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953948), GPR_U32(ctx, 2));
    // 0x3502e8: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x3502e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_3502ec:
    // 0x3502ec: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3502ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3502f0: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x3502f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3502f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3502F4u;
    {
        const bool branch_taken_0x3502f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3502f4) {
            ctx->pc = 0x350304u;
            goto label_350304;
        }
    }
    ctx->pc = 0x3502FCu;
    // 0x3502fc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3502FCu;
    {
        const bool branch_taken_0x3502fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3502fc) {
            ctx->pc = 0x350360u;
            goto label_350360;
        }
    }
    ctx->pc = 0x350304u;
label_350304:
    // 0x350304: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x350304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350308: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x350308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35030c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x35030cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x350310: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x350310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x350314: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x350314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x350318: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x350318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x35031c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x35031cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x350320: 0x2442c300  addiu       $v0, $v0, -0x3D00
    ctx->pc = 0x350320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951680));
    // 0x350324: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x350324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x350328: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x350328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x35032c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x35032cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350330: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x350330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x350334: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x350334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x350338: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x350338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35033c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x35033cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x350340: 0x2442c330  addiu       $v0, $v0, -0x3CD0
    ctx->pc = 0x350340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951728));
    // 0x350344: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x350344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x350348: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x350348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x35034c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x35034cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350350: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x350350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x350354: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x350354u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x350358: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x350358u;
    {
        const bool branch_taken_0x350358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350358) {
            ctx->pc = 0x3502ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3502ec;
        }
    }
    ctx->pc = 0x350360u;
label_350360:
    // 0x350360: 0x3c01001c  lui         $at, 0x1C
    ctx->pc = 0x350360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28 << 16));
    // 0x350364: 0xac20c5e0  sw          $zero, -0x3A20($at)
    ctx->pc = 0x350364u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1BC5E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BC5E0u, _value); } while (0);
    // 0x350368: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x350368u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_35036c:
    // 0x35036c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x35036cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350370: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x350370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x350374: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x350374u;
    {
        const bool branch_taken_0x350374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350374) {
            ctx->pc = 0x350384u;
            goto label_350384;
        }
    }
    ctx->pc = 0x35037Cu;
    // 0x35037c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x35037Cu;
    {
        const bool branch_taken_0x35037c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35037c) {
            ctx->pc = 0x3503B4u;
            goto label_3503b4;
        }
    }
    ctx->pc = 0x350384u;
label_350384:
    // 0x350384: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x350384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350388: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x350388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x35038c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x35038cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x350390: 0x2442c600  addiu       $v0, $v0, -0x3A00
    ctx->pc = 0x350390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952448));
    // 0x350394: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x350394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x350398: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x350398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35039c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35039cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3503a0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3503a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3503a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3503a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3503a8: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x3503a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x3503ac: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x3503ACu;
    {
        const bool branch_taken_0x3503ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3503ac) {
            ctx->pc = 0x35036Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35036c;
        }
    }
    ctx->pc = 0x3503B4u;
label_3503b4:
    // 0x3503b4: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x3503b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 0));
    // 0x3503b8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3503b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3503bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3503bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3503c0: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x3503c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x3503c4: 0xafc00024  sw          $zero, 0x24($fp)
    ctx->pc = 0x3503c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 0));
    // 0x3503c8: 0xafc00020  sw          $zero, 0x20($fp)
    ctx->pc = 0x3503c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 0));
    // 0x3503cc: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x3503ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x3503d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3503d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3503d4: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x3503D4u;
    SET_GPR_U32(ctx, 31, 0x3503DCu);
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x3503D4u, 0x3503DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3503DCu;
label_3503dc:
    // 0x3503dc: 0xaf82cbc8  sw          $v0, -0x3438($gp)
    ctx->pc = 0x3503dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953928), GPR_U32(ctx, 2));
    // 0x3503e0: 0x8f82cbc8  lw          $v0, -0x3438($gp)
    ctx->pc = 0x3503e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953928)));
    // 0x3503e4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3503E4u;
    {
        const bool branch_taken_0x3503e4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3503e4) {
            ctx->pc = 0x3503F4u;
            goto label_3503f4;
        }
    }
    ctx->pc = 0x3503ECu;
    // 0x3503ec: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x3503ECu;
    {
        const bool branch_taken_0x3503ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3503ec) {
            ctx->pc = 0x3504A4u;
            goto label_3504a4;
        }
    }
    ctx->pc = 0x3503F4u;
label_3503f4:
    // 0x3503f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3503f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3503f8: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x3503f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x3503fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3503fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350400: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x350400u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x350404: 0xafc00024  sw          $zero, 0x24($fp)
    ctx->pc = 0x350404u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 0));
    // 0x350408: 0xafc00020  sw          $zero, 0x20($fp)
    ctx->pc = 0x350408u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 0));
    // 0x35040c: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x35040cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x350410: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x350410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350414: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x350414u;
    SET_GPR_U32(ctx, 31, 0x35041Cu);
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x350414u, 0x35041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35041Cu;
label_35041c:
    // 0x35041c: 0xaf82cbcc  sw          $v0, -0x3434($gp)
    ctx->pc = 0x35041cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953932), GPR_U32(ctx, 2));
    // 0x350420: 0x8f82cbcc  lw          $v0, -0x3434($gp)
    ctx->pc = 0x350420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953932)));
    // 0x350424: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x350424u;
    {
        const bool branch_taken_0x350424 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x350424) {
            ctx->pc = 0x350434u;
            goto label_350434;
        }
    }
    ctx->pc = 0x35042Cu;
    // 0x35042c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x35042Cu;
    {
        const bool branch_taken_0x35042c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35042c) {
            ctx->pc = 0x3504A4u;
            goto label_3504a4;
        }
    }
    ctx->pc = 0x350434u;
label_350434:
    // 0x350434: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x350434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x350438: 0x244208d8  addiu       $v0, $v0, 0x8D8
    ctx->pc = 0x350438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2264));
    // 0x35043c: 0xafc20034  sw          $v0, 0x34($fp)
    ctx->pc = 0x35043cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
    // 0x350440: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x350440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x350444: 0x2442c680  addiu       $v0, $v0, -0x3980
    ctx->pc = 0x350444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952576));
    // 0x350448: 0xafc20038  sw          $v0, 0x38($fp)
    ctx->pc = 0x350448u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 56), GPR_U32(ctx, 2));
    // 0x35044c: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x35044cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x350450: 0xafc2003c  sw          $v0, 0x3C($fp)
    ctx->pc = 0x350450u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 60), GPR_U32(ctx, 2));
    // 0x350454: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x350454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x350458: 0x24428870  addiu       $v0, $v0, -0x7790
    ctx->pc = 0x350458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936688));
    // 0x35045c: 0xafc20040  sw          $v0, 0x40($fp)
    ctx->pc = 0x35045cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
    // 0x350460: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x350460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x350464: 0xafc20044  sw          $v0, 0x44($fp)
    ctx->pc = 0x350464u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 2));
    // 0x350468: 0xafc00050  sw          $zero, 0x50($fp)
    ctx->pc = 0x350468u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 80), GPR_U32(ctx, 0));
    // 0x35046c: 0x27c20030  addiu       $v0, $fp, 0x30
    ctx->pc = 0x35046cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
    // 0x350470: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x350470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350474: 0xc043c68  jal         func_10F1A0
    ctx->pc = 0x350474u;
    SET_GPR_U32(ctx, 31, 0x35047Cu);
    ctx->pc = 0x10F1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1A0u, 0x350474u, 0x35047Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35047Cu;
label_35047c:
    // 0x35047c: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x35047cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x350480: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x350480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x350484: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x350484u;
    {
        const bool branch_taken_0x350484 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x350484) {
            ctx->pc = 0x350494u;
            goto label_350494;
        }
    }
    ctx->pc = 0x35048Cu;
    // 0x35048c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x35048Cu;
    {
        const bool branch_taken_0x35048c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35048c) {
            ctx->pc = 0x3504A4u;
            goto label_3504a4;
        }
    }
    ctx->pc = 0x350494u;
label_350494:
    // 0x350494: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x350494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x350498: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x350498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35049c: 0xc044138  jal         func_1104E0
    ctx->pc = 0x35049Cu;
    SET_GPR_U32(ctx, 31, 0x3504A4u);
    ctx->pc = 0x1104E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1104E0u, 0x35049Cu, 0x3504A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3504A4u;
label_3504a4:
    // 0x3504a4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3504a4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3504a8: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x3504a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3504ac: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x3504acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3504b0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x3504b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3504b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3504B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3504B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3504BCu;
}
