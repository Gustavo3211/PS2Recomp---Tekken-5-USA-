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

// Function: sub_00324288
// Address: 0x324288 - 0x324348
void sub_00324288_0x324288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324288_0x324288");
#endif

    switch (ctx->pc) {
        case 0x324288u: goto label_324288;
        case 0x32428cu: goto label_32428c;
        case 0x324290u: goto label_324290;
        case 0x324294u: goto label_324294;
        case 0x324298u: goto label_324298;
        case 0x32429cu: goto label_32429c;
        case 0x3242a0u: goto label_3242a0;
        case 0x3242a4u: goto label_3242a4;
        case 0x3242a8u: goto label_3242a8;
        case 0x3242acu: goto label_3242ac;
        case 0x3242b0u: goto label_3242b0;
        case 0x3242b4u: goto label_3242b4;
        case 0x3242b8u: goto label_3242b8;
        case 0x3242bcu: goto label_3242bc;
        case 0x3242c0u: goto label_3242c0;
        case 0x3242c4u: goto label_3242c4;
        case 0x3242c8u: goto label_3242c8;
        case 0x3242ccu: goto label_3242cc;
        case 0x3242d0u: goto label_3242d0;
        case 0x3242d4u: goto label_3242d4;
        case 0x3242d8u: goto label_3242d8;
        case 0x3242dcu: goto label_3242dc;
        case 0x3242e0u: goto label_3242e0;
        case 0x3242e4u: goto label_3242e4;
        case 0x3242e8u: goto label_3242e8;
        case 0x3242ecu: goto label_3242ec;
        case 0x3242f0u: goto label_3242f0;
        case 0x3242f4u: goto label_3242f4;
        case 0x3242f8u: goto label_3242f8;
        case 0x3242fcu: goto label_3242fc;
        case 0x324300u: goto label_324300;
        case 0x324304u: goto label_324304;
        case 0x324308u: goto label_324308;
        case 0x32430cu: goto label_32430c;
        case 0x324310u: goto label_324310;
        case 0x324314u: goto label_324314;
        case 0x324318u: goto label_324318;
        case 0x32431cu: goto label_32431c;
        case 0x324320u: goto label_324320;
        case 0x324324u: goto label_324324;
        case 0x324328u: goto label_324328;
        case 0x32432cu: goto label_32432c;
        case 0x324330u: goto label_324330;
        case 0x324334u: goto label_324334;
        case 0x324338u: goto label_324338;
        case 0x32433cu: goto label_32433c;
        case 0x324340u: goto label_324340;
        case 0x324344u: goto label_324344;
        default: break;
    }

    ctx->pc = 0x324288u;

label_324288:
    // 0x324288: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x324288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_32428c:
    // 0x32428c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x32428cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_324290:
    // 0x324290: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x324290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_324294:
    // 0x324294: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x324294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_324298:
    // 0x324298: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x324298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_32429c:
    // 0x32429c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x32429cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3242a0:
    // 0x3242a0: 0x24421e50  addiu       $v0, $v0, 0x1E50
    ctx->pc = 0x3242a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7760));
label_3242a4:
    // 0x3242a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3242a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_3242a8:
    // 0x3242a8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x3242a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_3242ac:
    // 0x3242ac: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3242acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_3242b0:
    // 0x3242b0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3242b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3242b4:
    // 0x3242b4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x3242b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_3242b8:
    // 0x3242b8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3242b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3242bc:
    // 0x3242bc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3242bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3242c0:
    // 0x3242c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3242c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3242c4:
    // 0x3242c4: 0x8c430414  lw          $v1, 0x414($v0)
    ctx->pc = 0x3242c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1044)));
label_3242c8:
    // 0x3242c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3242c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3242cc:
    // 0x3242cc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x3242ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_3242d0:
    // 0x3242d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3242d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3242d4:
    // 0x3242d4: 0x24420410  addiu       $v0, $v0, 0x410
    ctx->pc = 0x3242d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1040));
label_3242d8:
    // 0x3242d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3242d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3242dc:
    // 0x3242dc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3242dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3242e0:
    // 0x3242e0: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x3242e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_3242e4:
    // 0x3242e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3242e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3242e8:
    // 0x3242e8: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
label_3242ec:
    if (ctx->pc == 0x3242ECu) {
        ctx->pc = 0x3242ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3242E8u;
        // 0x3242ec: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3242F0u;
        goto label_3242f0;
    }
    ctx->pc = 0x3242E8u;
    {
        const bool branch_taken_0x3242e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3242ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3242E8u;
        // 0x3242ec: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3242e8) {
            ctx->pc = 0x32432Cu;
            goto label_32432c;
        }
    }
    ctx->pc = 0x3242F0u;
label_3242f0:
    // 0x3242f0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3242f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3242f4:
    // 0x3242f4: 0x0  nop
    ctx->pc = 0x3242f4u;
    // NOP
label_3242f8:
    // 0x3242f8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3242f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3242fc:
    // 0x3242fc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3242fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_324300:
    // 0x324300: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x324300u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_324304:
    // 0x324304: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x324304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_324308:
    // 0x324308: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x324308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_32430c:
    // 0x32430c: 0x60f809  jalr        $v1
label_324310:
    if (ctx->pc == 0x324310u) {
        ctx->pc = 0x324310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32430Cu;
        // 0x324310: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324314u;
        goto label_324314;
    }
    ctx->pc = 0x32430Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x324314u);
        ctx->pc = 0x324310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32430Cu;
        // 0x324310: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32430Cu, 0x324314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x324314u;
label_324314:
    // 0x324314: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x324314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_324318:
    // 0x324318: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x324318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_32431c:
    // 0x32431c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32431cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_324320:
    // 0x324320: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x324320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_324324:
    // 0x324324: 0x5462fff4  bnel        $v1, $v0, . + 4 + (-0xC << 2)
label_324328:
    if (ctx->pc == 0x324328u) {
        ctx->pc = 0x324328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324324u;
        // 0x324328: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32432Cu;
        goto label_32432c;
    }
    ctx->pc = 0x324324u;
    {
        const bool branch_taken_0x324324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x324324) {
            ctx->pc = 0x324328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324324u;
            // 0x324328: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3242F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3242f8;
        }
    }
    ctx->pc = 0x32432Cu;
label_32432c:
    // 0x32432c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x32432cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_324330:
    // 0x324330: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x324330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_324334:
    // 0x324334: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x324334u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_324338:
    // 0x324338: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x324338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_32433c:
    // 0x32433c: 0x3e00008  jr          $ra
label_324340:
    if (ctx->pc == 0x324340u) {
        ctx->pc = 0x324340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32433Cu;
        // 0x324340: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324344u;
        goto label_324344;
    }
    ctx->pc = 0x32433Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32433Cu;
        // 0x324340: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32433Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324344u;
label_324344:
    // 0x324344: 0x0  nop
    ctx->pc = 0x324344u;
    // NOP
    ctx->pc = 0x324348u;
}
