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

// Function: sub_00324848
// Address: 0x324848 - 0x324910
void sub_00324848_0x324848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324848_0x324848");
#endif

    switch (ctx->pc) {
        case 0x324848u: goto label_324848;
        case 0x32484cu: goto label_32484c;
        case 0x324850u: goto label_324850;
        case 0x324854u: goto label_324854;
        case 0x324858u: goto label_324858;
        case 0x32485cu: goto label_32485c;
        case 0x324860u: goto label_324860;
        case 0x324864u: goto label_324864;
        case 0x324868u: goto label_324868;
        case 0x32486cu: goto label_32486c;
        case 0x324870u: goto label_324870;
        case 0x324874u: goto label_324874;
        case 0x324878u: goto label_324878;
        case 0x32487cu: goto label_32487c;
        case 0x324880u: goto label_324880;
        case 0x324884u: goto label_324884;
        case 0x324888u: goto label_324888;
        case 0x32488cu: goto label_32488c;
        case 0x324890u: goto label_324890;
        case 0x324894u: goto label_324894;
        case 0x324898u: goto label_324898;
        case 0x32489cu: goto label_32489c;
        case 0x3248a0u: goto label_3248a0;
        case 0x3248a4u: goto label_3248a4;
        case 0x3248a8u: goto label_3248a8;
        case 0x3248acu: goto label_3248ac;
        case 0x3248b0u: goto label_3248b0;
        case 0x3248b4u: goto label_3248b4;
        case 0x3248b8u: goto label_3248b8;
        case 0x3248bcu: goto label_3248bc;
        case 0x3248c0u: goto label_3248c0;
        case 0x3248c4u: goto label_3248c4;
        case 0x3248c8u: goto label_3248c8;
        case 0x3248ccu: goto label_3248cc;
        case 0x3248d0u: goto label_3248d0;
        case 0x3248d4u: goto label_3248d4;
        case 0x3248d8u: goto label_3248d8;
        case 0x3248dcu: goto label_3248dc;
        case 0x3248e0u: goto label_3248e0;
        case 0x3248e4u: goto label_3248e4;
        case 0x3248e8u: goto label_3248e8;
        case 0x3248ecu: goto label_3248ec;
        case 0x3248f0u: goto label_3248f0;
        case 0x3248f4u: goto label_3248f4;
        case 0x3248f8u: goto label_3248f8;
        case 0x3248fcu: goto label_3248fc;
        case 0x324900u: goto label_324900;
        case 0x324904u: goto label_324904;
        case 0x324908u: goto label_324908;
        case 0x32490cu: goto label_32490c;
        default: break;
    }

    ctx->pc = 0x324848u;

label_324848:
    // 0x324848: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x324848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
label_32484c:
    // 0x32484c: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32484cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_324850:
    // 0x324850: 0x8c650480  lw          $a1, 0x480($v1)
    ctx->pc = 0x324850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1152)));
label_324854:
    // 0x324854: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x324854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_324858:
    // 0x324858: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x324858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_32485c:
    // 0x32485c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x32485cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_324860:
    // 0x324860: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x324860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_324864:
    // 0x324864: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x324864u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_324868:
    // 0x324868: 0x24421dd8  addiu       $v0, $v0, 0x1DD8
    ctx->pc = 0x324868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7640));
label_32486c:
    // 0x32486c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x32486cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_324870:
    // 0x324870: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x324870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_324874:
    // 0x324874: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x324874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_324878:
    // 0x324878: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x324878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_32487c:
    // 0x32487c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x32487cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_324880:
    // 0x324880: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x324880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_324884:
    // 0x324884: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x324884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_324888:
    // 0x324888: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x324888u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_32488c:
    // 0x32488c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x32488cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_324890:
    // 0x324890: 0x8c430414  lw          $v1, 0x414($v0)
    ctx->pc = 0x324890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1044)));
label_324894:
    // 0x324894: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x324894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_324898:
    // 0x324898: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x324898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_32489c:
    // 0x32489c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x32489cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3248a0:
    // 0x3248a0: 0x24420410  addiu       $v0, $v0, 0x410
    ctx->pc = 0x3248a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1040));
label_3248a4:
    // 0x3248a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3248a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3248a8:
    // 0x3248a8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3248a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3248ac:
    // 0x3248ac: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x3248acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_3248b0:
    // 0x3248b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3248b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3248b4:
    // 0x3248b4: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
label_3248b8:
    if (ctx->pc == 0x3248B8u) {
        ctx->pc = 0x3248B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3248B4u;
        // 0x3248b8: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3248BCu;
        goto label_3248bc;
    }
    ctx->pc = 0x3248B4u;
    {
        const bool branch_taken_0x3248b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3248B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3248B4u;
        // 0x3248b8: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3248b4) {
            ctx->pc = 0x3248F4u;
            goto label_3248f4;
        }
    }
    ctx->pc = 0x3248BCu;
label_3248bc:
    // 0x3248bc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3248bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3248c0:
    // 0x3248c0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3248c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3248c4:
    // 0x3248c4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3248c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3248c8:
    // 0x3248c8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3248c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3248cc:
    // 0x3248cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3248ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3248d0:
    // 0x3248d0: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x3248d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3248d4:
    // 0x3248d4: 0x60f809  jalr        $v1
label_3248d8:
    if (ctx->pc == 0x3248D8u) {
        ctx->pc = 0x3248D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3248D4u;
        // 0x3248d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3248DCu;
        goto label_3248dc;
    }
    ctx->pc = 0x3248D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3248DCu);
        ctx->pc = 0x3248D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3248D4u;
        // 0x3248d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3248D4u, 0x3248DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3248DCu;
label_3248dc:
    // 0x3248dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3248dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3248e0:
    // 0x3248e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3248e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3248e4:
    // 0x3248e4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3248e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3248e8:
    // 0x3248e8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3248e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3248ec:
    // 0x3248ec: 0x5462fff4  bnel        $v1, $v0, . + 4 + (-0xC << 2)
label_3248f0:
    if (ctx->pc == 0x3248F0u) {
        ctx->pc = 0x3248F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3248ECu;
        // 0x3248f0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3248F4u;
        goto label_3248f4;
    }
    ctx->pc = 0x3248ECu;
    {
        const bool branch_taken_0x3248ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3248ec) {
            ctx->pc = 0x3248F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3248ECu;
            // 0x3248f0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3248C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3248c0;
        }
    }
    ctx->pc = 0x3248F4u;
label_3248f4:
    // 0x3248f4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3248f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3248f8:
    // 0x3248f8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x3248f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3248fc:
    // 0x3248fc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x3248fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_324900:
    // 0x324900: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x324900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_324904:
    // 0x324904: 0x3e00008  jr          $ra
label_324908:
    if (ctx->pc == 0x324908u) {
        ctx->pc = 0x324908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324904u;
        // 0x324908: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32490Cu;
        goto label_32490c;
    }
    ctx->pc = 0x324904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324904u;
        // 0x324908: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32490Cu;
label_32490c:
    // 0x32490c: 0x0  nop
    ctx->pc = 0x32490cu;
    // NOP
    ctx->pc = 0x324910u;
}
