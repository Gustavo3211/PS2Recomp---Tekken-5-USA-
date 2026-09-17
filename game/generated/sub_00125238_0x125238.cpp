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

// Function: sub_00125238
// Address: 0x125238 - 0x1252e8
void sub_00125238_0x125238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125238_0x125238");
#endif

    switch (ctx->pc) {
        case 0x125238u: goto label_125238;
        case 0x12523cu: goto label_12523c;
        case 0x125240u: goto label_125240;
        case 0x125244u: goto label_125244;
        case 0x125248u: goto label_125248;
        case 0x12524cu: goto label_12524c;
        case 0x125250u: goto label_125250;
        case 0x125254u: goto label_125254;
        case 0x125258u: goto label_125258;
        case 0x12525cu: goto label_12525c;
        case 0x125260u: goto label_125260;
        case 0x125264u: goto label_125264;
        case 0x125268u: goto label_125268;
        case 0x12526cu: goto label_12526c;
        case 0x125270u: goto label_125270;
        case 0x125274u: goto label_125274;
        case 0x125278u: goto label_125278;
        case 0x12527cu: goto label_12527c;
        case 0x125280u: goto label_125280;
        case 0x125284u: goto label_125284;
        case 0x125288u: goto label_125288;
        case 0x12528cu: goto label_12528c;
        case 0x125290u: goto label_125290;
        case 0x125294u: goto label_125294;
        case 0x125298u: goto label_125298;
        case 0x12529cu: goto label_12529c;
        case 0x1252a0u: goto label_1252a0;
        case 0x1252a4u: goto label_1252a4;
        case 0x1252a8u: goto label_1252a8;
        case 0x1252acu: goto label_1252ac;
        case 0x1252b0u: goto label_1252b0;
        case 0x1252b4u: goto label_1252b4;
        case 0x1252b8u: goto label_1252b8;
        case 0x1252bcu: goto label_1252bc;
        case 0x1252c0u: goto label_1252c0;
        case 0x1252c4u: goto label_1252c4;
        case 0x1252c8u: goto label_1252c8;
        case 0x1252ccu: goto label_1252cc;
        case 0x1252d0u: goto label_1252d0;
        case 0x1252d4u: goto label_1252d4;
        case 0x1252d8u: goto label_1252d8;
        case 0x1252dcu: goto label_1252dc;
        case 0x1252e0u: goto label_1252e0;
        case 0x1252e4u: goto label_1252e4;
        default: break;
    }

    ctx->pc = 0x125238u;

label_125238:
    // 0x125238: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_12523c:
    // 0x12523c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12523cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_125240:
    // 0x125240: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x125240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_125244:
    // 0x125244: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x125244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_125248:
    // 0x125248: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x125248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12524c:
    // 0x12524c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12524cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_125250:
    // 0x125250: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x125250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_125254:
    // 0x125254: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x125254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_125258:
    // 0x125258: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x125258u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_12525c:
    // 0x12525c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12525cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_125260:
    // 0x125260: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x125260u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125264:
    // 0x125264: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x125264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_125268:
    // 0x125268: 0xc0493b0  jal         func_124EC0
label_12526c:
    if (ctx->pc == 0x12526Cu) {
        ctx->pc = 0x12526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125268u;
        // 0x12526c: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125270u;
        goto label_125270;
    }
    ctx->pc = 0x125268u;
    SET_GPR_U32(ctx, 31, 0x125270u);
    ctx->pc = 0x12526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125268u;
    // 0x12526c: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x125268u, 0x125270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125270u;
label_125270:
    // 0x125270: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x125270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_125274:
    // 0x125274: 0x32430006  andi        $v1, $s2, 0x6
    ctx->pc = 0x125274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)6);
label_125278:
    // 0x125278: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x125278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12527c:
    // 0x12527c: 0x38630004  xori        $v1, $v1, 0x4
    ctx->pc = 0x12527cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
label_125280:
    // 0x125280: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x125280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_125284:
    // 0x125284: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_125288:
    if (ctx->pc == 0x125288u) {
        ctx->pc = 0x125288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125284u;
        // 0x125288: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12528Cu;
        goto label_12528c;
    }
    ctx->pc = 0x125284u;
    {
        const bool branch_taken_0x125284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125284u;
        // 0x125288: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125284) {
            ctx->pc = 0x1252A8u;
            goto label_1252a8;
        }
    }
    ctx->pc = 0x12528Cu;
label_12528c:
    // 0x12528c: 0x2c620001  sltiu       $v0, $v1, 0x1
    ctx->pc = 0x12528cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_125290:
    // 0x125290: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x125290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_125294:
    // 0x125294: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x125294u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
label_125298:
    // 0x125298: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x125298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_12529c:
    // 0x12529c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1252a0:
    if (ctx->pc == 0x1252A0u) {
        ctx->pc = 0x1252A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12529Cu;
        // 0x1252a0: 0xae320004  sw          $s2, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1252A4u;
        goto label_1252a4;
    }
    ctx->pc = 0x12529Cu;
    {
        const bool branch_taken_0x12529c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1252A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12529Cu;
        // 0x1252a0: 0xae320004  sw          $s2, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12529c) {
            ctx->pc = 0x1252C4u;
            goto label_1252c4;
        }
    }
    ctx->pc = 0x1252A4u;
label_1252a4:
    // 0x1252a4: 0x0  nop
    ctx->pc = 0x1252a4u;
    // NOP
label_1252a8:
    // 0x1252a8: 0x8e890008  lw          $t1, 0x8($s4)
    ctx->pc = 0x1252a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1252ac:
    // 0x1252ac: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x1252acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1252b0:
    // 0x1252b0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1252b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1252b4:
    // 0x1252b4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1252b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1252b8:
    // 0x1252b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1252b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1252bc:
    // 0x1252bc: 0x40f809  jalr        $v0
label_1252c0:
    if (ctx->pc == 0x1252C0u) {
        ctx->pc = 0x1252C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1252BCu;
        // 0x1252c0: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1252C4u;
        goto label_1252c4;
    }
    ctx->pc = 0x1252BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1252C4u);
        ctx->pc = 0x1252C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1252BCu;
        // 0x1252c0: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1252BCu, 0x1252C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1252C4u;
label_1252c4:
    // 0x1252c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1252c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1252c8:
    // 0x1252c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1252c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1252cc:
    // 0x1252cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1252ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1252d0:
    // 0x1252d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1252d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1252d4:
    // 0x1252d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1252d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1252d8:
    // 0x1252d8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1252d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1252dc:
    // 0x1252dc: 0x3e00008  jr          $ra
label_1252e0:
    if (ctx->pc == 0x1252E0u) {
        ctx->pc = 0x1252E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1252DCu;
        // 0x1252e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1252E4u;
        goto label_1252e4;
    }
    ctx->pc = 0x1252DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1252E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1252DCu;
        // 0x1252e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1252DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1252E4u;
label_1252e4:
    // 0x1252e4: 0x0  nop
    ctx->pc = 0x1252e4u;
    // NOP
    ctx->pc = 0x1252e8u;
}
