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

// Function: sub_00324348
// Address: 0x324348 - 0x324408
void sub_00324348_0x324348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324348_0x324348");
#endif

    switch (ctx->pc) {
        case 0x324348u: goto label_324348;
        case 0x32434cu: goto label_32434c;
        case 0x324350u: goto label_324350;
        case 0x324354u: goto label_324354;
        case 0x324358u: goto label_324358;
        case 0x32435cu: goto label_32435c;
        case 0x324360u: goto label_324360;
        case 0x324364u: goto label_324364;
        case 0x324368u: goto label_324368;
        case 0x32436cu: goto label_32436c;
        case 0x324370u: goto label_324370;
        case 0x324374u: goto label_324374;
        case 0x324378u: goto label_324378;
        case 0x32437cu: goto label_32437c;
        case 0x324380u: goto label_324380;
        case 0x324384u: goto label_324384;
        case 0x324388u: goto label_324388;
        case 0x32438cu: goto label_32438c;
        case 0x324390u: goto label_324390;
        case 0x324394u: goto label_324394;
        case 0x324398u: goto label_324398;
        case 0x32439cu: goto label_32439c;
        case 0x3243a0u: goto label_3243a0;
        case 0x3243a4u: goto label_3243a4;
        case 0x3243a8u: goto label_3243a8;
        case 0x3243acu: goto label_3243ac;
        case 0x3243b0u: goto label_3243b0;
        case 0x3243b4u: goto label_3243b4;
        case 0x3243b8u: goto label_3243b8;
        case 0x3243bcu: goto label_3243bc;
        case 0x3243c0u: goto label_3243c0;
        case 0x3243c4u: goto label_3243c4;
        case 0x3243c8u: goto label_3243c8;
        case 0x3243ccu: goto label_3243cc;
        case 0x3243d0u: goto label_3243d0;
        case 0x3243d4u: goto label_3243d4;
        case 0x3243d8u: goto label_3243d8;
        case 0x3243dcu: goto label_3243dc;
        case 0x3243e0u: goto label_3243e0;
        case 0x3243e4u: goto label_3243e4;
        case 0x3243e8u: goto label_3243e8;
        case 0x3243ecu: goto label_3243ec;
        case 0x3243f0u: goto label_3243f0;
        case 0x3243f4u: goto label_3243f4;
        case 0x3243f8u: goto label_3243f8;
        case 0x3243fcu: goto label_3243fc;
        case 0x324400u: goto label_324400;
        case 0x324404u: goto label_324404;
        default: break;
    }

    ctx->pc = 0x324348u;

label_324348:
    // 0x324348: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x324348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_32434c:
    // 0x32434c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x32434cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_324350:
    // 0x324350: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x324350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_324354:
    // 0x324354: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x324354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_324358:
    // 0x324358: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x324358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_32435c:
    // 0x32435c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x32435cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_324360:
    // 0x324360: 0x24421e38  addiu       $v0, $v0, 0x1E38
    ctx->pc = 0x324360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7736));
label_324364:
    // 0x324364: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x324364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_324368:
    // 0x324368: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x324368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_32436c:
    // 0x32436c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x32436cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_324370:
    // 0x324370: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x324370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_324374:
    // 0x324374: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x324374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_324378:
    // 0x324378: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x324378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_32437c:
    // 0x32437c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x32437cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_324380:
    // 0x324380: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x324380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_324384:
    // 0x324384: 0x8c430414  lw          $v1, 0x414($v0)
    ctx->pc = 0x324384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1044)));
label_324388:
    // 0x324388: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x324388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_32438c:
    // 0x32438c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x32438cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_324390:
    // 0x324390: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x324390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_324394:
    // 0x324394: 0x24420410  addiu       $v0, $v0, 0x410
    ctx->pc = 0x324394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1040));
label_324398:
    // 0x324398: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x324398u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32439c:
    // 0x32439c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x32439cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3243a0:
    // 0x3243a0: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x3243a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_3243a4:
    // 0x3243a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3243a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3243a8:
    // 0x3243a8: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
label_3243ac:
    if (ctx->pc == 0x3243ACu) {
        ctx->pc = 0x3243ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3243A8u;
        // 0x3243ac: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3243B0u;
        goto label_3243b0;
    }
    ctx->pc = 0x3243A8u;
    {
        const bool branch_taken_0x3243a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3243ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3243A8u;
        // 0x3243ac: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3243a8) {
            ctx->pc = 0x3243ECu;
            goto label_3243ec;
        }
    }
    ctx->pc = 0x3243B0u;
label_3243b0:
    // 0x3243b0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3243b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3243b4:
    // 0x3243b4: 0x0  nop
    ctx->pc = 0x3243b4u;
    // NOP
label_3243b8:
    // 0x3243b8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3243b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3243bc:
    // 0x3243bc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3243bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3243c0:
    // 0x3243c0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3243c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3243c4:
    // 0x3243c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3243c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3243c8:
    // 0x3243c8: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x3243c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3243cc:
    // 0x3243cc: 0x60f809  jalr        $v1
label_3243d0:
    if (ctx->pc == 0x3243D0u) {
        ctx->pc = 0x3243D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3243CCu;
        // 0x3243d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3243D4u;
        goto label_3243d4;
    }
    ctx->pc = 0x3243CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3243D4u);
        ctx->pc = 0x3243D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3243CCu;
        // 0x3243d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3243CCu, 0x3243D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3243D4u;
label_3243d4:
    // 0x3243d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3243d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3243d8:
    // 0x3243d8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3243d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3243dc:
    // 0x3243dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3243dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3243e0:
    // 0x3243e0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3243e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3243e4:
    // 0x3243e4: 0x5462fff4  bnel        $v1, $v0, . + 4 + (-0xC << 2)
label_3243e8:
    if (ctx->pc == 0x3243E8u) {
        ctx->pc = 0x3243E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3243E4u;
        // 0x3243e8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3243ECu;
        goto label_3243ec;
    }
    ctx->pc = 0x3243E4u;
    {
        const bool branch_taken_0x3243e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3243e4) {
            ctx->pc = 0x3243E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3243E4u;
            // 0x3243e8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3243B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3243b8;
        }
    }
    ctx->pc = 0x3243ECu;
label_3243ec:
    // 0x3243ec: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3243ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3243f0:
    // 0x3243f0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x3243f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3243f4:
    // 0x3243f4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x3243f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3243f8:
    // 0x3243f8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x3243f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_3243fc:
    // 0x3243fc: 0x3e00008  jr          $ra
label_324400:
    if (ctx->pc == 0x324400u) {
        ctx->pc = 0x324400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3243FCu;
        // 0x324400: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324404u;
        goto label_324404;
    }
    ctx->pc = 0x3243FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3243FCu;
        // 0x324400: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3243FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324404u;
label_324404:
    // 0x324404: 0x0  nop
    ctx->pc = 0x324404u;
    // NOP
    ctx->pc = 0x324408u;
}
