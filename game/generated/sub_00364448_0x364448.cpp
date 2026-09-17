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

// Function: sub_00364448
// Address: 0x364448 - 0x3647f8
void sub_00364448_0x364448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364448_0x364448");
#endif

    switch (ctx->pc) {
        case 0x364458u: goto label_364458;
        case 0x3644a0u: goto label_3644a0;
        case 0x3644f8u: goto label_3644f8;
        case 0x36450cu: goto label_36450c;
        case 0x364558u: goto label_364558;
        case 0x364570u: goto label_364570;
        case 0x3645b0u: goto label_3645b0;
        case 0x3645c8u: goto label_3645c8;
        case 0x3645f0u: goto label_3645f0;
        case 0x364608u: goto label_364608;
        case 0x364638u: goto label_364638;
        case 0x364658u: goto label_364658;
        case 0x364728u: goto label_364728;
        case 0x364748u: goto label_364748;
        default: break;
    }

    ctx->pc = 0x364448u;

    // 0x364448: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x364448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36444c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36444cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364450: 0x3e00008  jr          $ra
    ctx->pc = 0x364450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364450u;
        // 0x364454: 0xac831400  sw          $v1, 0x1400($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364458u;
label_364458:
    // 0x364458: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x364458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36445c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36445cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x364460: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x364460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364464: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x364464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x364468: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x364468u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36446c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x36446cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x364470: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x364470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x364474: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x364474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x364478: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x364478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x36447c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x36447cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x364480: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x364480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x364484: 0x8e231400  lw          $v1, 0x1400($s1)
    ctx->pc = 0x364484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5120)));
    // 0x364488: 0x18600028  blez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x364488u;
    {
        const bool branch_taken_0x364488 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x36448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364488u;
        // 0x36448c: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364488) {
            ctx->pc = 0x36452Cu;
            goto label_36452c;
        }
    }
    ctx->pc = 0x364490u;
    // 0x364490: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x364490u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x364494: 0x26300a00  addiu       $s0, $s1, 0xA00
    ctx->pc = 0x364494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2560));
    // 0x364498: 0x24130a00  addiu       $s3, $zero, 0xA00
    ctx->pc = 0x364498u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2560));
    // 0x36449c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x36449cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3644a0:
    // 0x3644a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3644a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3644a4: 0x1055001b  beq         $v0, $s5, . + 4 + (0x1B << 2)
    ctx->pc = 0x3644A4u;
    {
        const bool branch_taken_0x3644a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x3644A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3644A4u;
        // 0x3644a8: 0x26440a10  addiu       $a0, $s2, 0xA10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3644a4) {
            ctx->pc = 0x364514u;
            goto label_364514;
        }
    }
    ctx->pc = 0x3644ACu;
    // 0x3644ac: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x3644acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3644b0: 0x732821  addu        $a1, $v1, $s3
    ctx->pc = 0x3644b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3644b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3644b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3644b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3644b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3644bc: 0x561023  subu        $v0, $v0, $s6
    ctx->pc = 0x3644bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x3644c0: 0x5c400013  bgtzl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3644C0u;
    {
        const bool branch_taken_0x3644c0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3644c0) {
            ctx->pc = 0x3644C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3644C0u;
            // 0x3644c4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x364510u;
            goto label_364510;
        }
    }
    ctx->pc = 0x3644C8u;
    // 0x3644c8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3644c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3644cc: 0x2323021  addu        $a2, $s1, $s2
    ctx->pc = 0x3644ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x3644d0: 0x24c70004  addiu       $a3, $a2, 0x4
    ctx->pc = 0x3644d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3644d4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3644d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3644d8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3644d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3644dc: 0x8e03f600  lw          $v1, -0xA00($s0)
    ctx->pc = 0x3644dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294964736)));
    // 0x3644e0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3644E0u;
    {
        const bool branch_taken_0x3644e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3644E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3644E0u;
        // 0x3644e4: 0x24c60a00  addiu       $a2, $a2, 0xA00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3644e0) {
            ctx->pc = 0x364500u;
            goto label_364500;
        }
    }
    ctx->pc = 0x3644E8u;
    // 0x3644e8: 0x96040006  lhu         $a0, 0x6($s0)
    ctx->pc = 0x3644e8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3644ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3644ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3644f0: 0xc0d8f3c  jal         func_363CF0
    ctx->pc = 0x3644F0u;
    SET_GPR_U32(ctx, 31, 0x3644F8u);
    ctx->pc = 0x3644F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3644F0u;
    // 0x3644f4: 0x96050004  lhu         $a1, 0x4($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363CF0u, 0x3644F0u, 0x3644F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3644F8u;
label_3644f8:
    // 0x3644f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3644F8u;
    {
        const bool branch_taken_0x3644f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3644FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3644F8u;
        // 0x3644fc: 0xae150000  sw          $s5, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3644f8) {
            ctx->pc = 0x364510u;
            goto label_364510;
        }
    }
    ctx->pc = 0x364500u;
label_364500:
    // 0x364500: 0x96040006  lhu         $a0, 0x6($s0)
    ctx->pc = 0x364500u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x364504: 0xc0d8f4a  jal         func_363D28
    ctx->pc = 0x364504u;
    SET_GPR_U32(ctx, 31, 0x36450Cu);
    ctx->pc = 0x364508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364504u;
    // 0x364508: 0x96050004  lhu         $a1, 0x4($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363D28u, 0x364504u, 0x36450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36450Cu;
label_36450c:
    // 0x36450c: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x36450cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
label_364510:
    // 0x364510: 0x8e231400  lw          $v1, 0x1400($s1)
    ctx->pc = 0x364510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5120)));
label_364514:
    // 0x364514: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x364514u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x364518: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x364518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x36451c: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x36451cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x364520: 0x26730028  addiu       $s3, $s3, 0x28
    ctx->pc = 0x364520u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x364524: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x364524u;
    {
        const bool branch_taken_0x364524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x364528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364524u;
        // 0x364528: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364524) {
            ctx->pc = 0x3644A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3644a0;
        }
    }
    ctx->pc = 0x36452Cu;
label_36452c:
    // 0x36452c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36452cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364530: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x364530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364534: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x364534u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x364538: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x364538u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36453c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x36453cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x364540: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x364540u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x364544: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x364544u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x364548: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x364548u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36454c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x36454cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364550: 0x3e00008  jr          $ra
    ctx->pc = 0x364550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364550u;
        // 0x364554: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364558u;
label_364558:
    // 0x364558: 0x8c871400  lw          $a3, 0x1400($a0)
    ctx->pc = 0x364558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5120)));
    // 0x36455c: 0x18e00011  blez        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x36455Cu;
    {
        const bool branch_taken_0x36455c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x364560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36455Cu;
        // 0x364560: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36455c) {
            ctx->pc = 0x3645A4u;
            goto label_3645a4;
        }
    }
    ctx->pc = 0x364564u;
    // 0x364564: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x364564u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x364568: 0x24860a00  addiu       $a2, $a0, 0xA00
    ctx->pc = 0x364568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2560));
    // 0x36456c: 0x0  nop
    ctx->pc = 0x36456cu;
    // NOP
label_364570:
    // 0x364570: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x364570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x364574: 0x10490008  beq         $v0, $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x364574u;
    {
        const bool branch_taken_0x364574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x364578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364574u;
        // 0x364578: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364574) {
            ctx->pc = 0x364598u;
            goto label_364598;
        }
    }
    ctx->pc = 0x36457Cu;
    // 0x36457c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x36457cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x364580: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x364580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x364584: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x364584u;
    {
        const bool branch_taken_0x364584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x364584) {
            ctx->pc = 0x364598u;
            goto label_364598;
        }
    }
    ctx->pc = 0x36458Cu;
    // 0x36458c: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x36458cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x364590: 0xacc0f600  sw          $zero, -0xA00($a2)
    ctx->pc = 0x364590u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294964736), GPR_U32(ctx, 0));
    // 0x364594: 0x8c871400  lw          $a3, 0x1400($a0)
    ctx->pc = 0x364594u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5120)));
label_364598:
    // 0x364598: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x364598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x36459c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x36459Cu;
    {
        const bool branch_taken_0x36459c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3645A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36459Cu;
        // 0x3645a0: 0x24c60028  addiu       $a2, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36459c) {
            ctx->pc = 0x364570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364570;
        }
    }
    ctx->pc = 0x3645A4u;
label_3645a4:
    // 0x3645a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3645A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3645A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3645A4u;
        // 0x3645a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3645A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3645ACu;
    // 0x3645ac: 0x0  nop
    ctx->pc = 0x3645acu;
    // NOP
label_3645b0:
    // 0x3645b0: 0x8c821400  lw          $v0, 0x1400($a0)
    ctx->pc = 0x3645b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5120)));
    // 0x3645b4: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3645B4u;
    {
        const bool branch_taken_0x3645b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3645B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3645B4u;
        // 0x3645b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3645b4) {
            ctx->pc = 0x3645E4u;
            goto label_3645e4;
        }
    }
    ctx->pc = 0x3645BCu;
    // 0x3645bc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3645bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3645c0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3645c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3645c4: 0x0  nop
    ctx->pc = 0x3645c4u;
    // NOP
label_3645c8:
    // 0x3645c8: 0xac660a00  sw          $a2, 0xA00($v1)
    ctx->pc = 0x3645c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2560), GPR_U32(ctx, 6));
    // 0x3645cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3645ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3645d0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3645d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3645d4: 0x8c821400  lw          $v0, 0x1400($a0)
    ctx->pc = 0x3645d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5120)));
    // 0x3645d8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x3645d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3645dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3645DCu;
    {
        const bool branch_taken_0x3645dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3645E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3645DCu;
        // 0x3645e0: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3645dc) {
            ctx->pc = 0x3645C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3645c8;
        }
    }
    ctx->pc = 0x3645E4u;
label_3645e4:
    // 0x3645e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3645E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3645E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3645E4u;
        // 0x3645e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3645E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3645ECu;
    // 0x3645ec: 0x0  nop
    ctx->pc = 0x3645ecu;
    // NOP
label_3645f0:
    // 0x3645f0: 0x8c831400  lw          $v1, 0x1400($a0)
    ctx->pc = 0x3645f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5120)));
    // 0x3645f4: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3645F4u;
    {
        const bool branch_taken_0x3645f4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3645F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3645F4u;
        // 0x3645f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3645f4) {
            ctx->pc = 0x36462Cu;
            goto label_36462c;
        }
    }
    ctx->pc = 0x3645FCu;
    // 0x3645fc: 0x24840a08  addiu       $a0, $a0, 0xA08
    ctx->pc = 0x3645fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2568));
    // 0x364600: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x364600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364604: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x364604u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_364608:
    // 0x364608: 0x8c82fff8  lw          $v0, -0x8($a0)
    ctx->pc = 0x364608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
    // 0x36460c: 0x10480004  beq         $v0, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36460Cu;
    {
        const bool branch_taken_0x36460c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x364610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36460Cu;
        // 0x364610: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36460c) {
            ctx->pc = 0x364620u;
            goto label_364620;
        }
    }
    ctx->pc = 0x364614u;
    // 0x364614: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x364614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x364618: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x364618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x36461c: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x36461cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_364620:
    // 0x364620: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x364620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x364624: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x364624u;
    {
        const bool branch_taken_0x364624 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x364628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364624u;
        // 0x364628: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364624) {
            ctx->pc = 0x364608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364608;
        }
    }
    ctx->pc = 0x36462Cu;
label_36462c:
    // 0x36462c: 0x3e00008  jr          $ra
    ctx->pc = 0x36462Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36462Cu;
        // 0x364630: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36462Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364634u;
    // 0x364634: 0x0  nop
    ctx->pc = 0x364634u;
    // NOP
label_364638:
    // 0x364638: 0x8c831400  lw          $v1, 0x1400($a0)
    ctx->pc = 0x364638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5120)));
    // 0x36463c: 0x18600037  blez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x36463Cu;
    {
        const bool branch_taken_0x36463c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x364640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36463Cu;
        // 0x364640: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36463c) {
            ctx->pc = 0x36471Cu;
            goto label_36471c;
        }
    }
    ctx->pc = 0x364644u;
    // 0x364644: 0x24840a00  addiu       $a0, $a0, 0xA00
    ctx->pc = 0x364644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2560));
    // 0x364648: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x364648u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36464c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x36464cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364650: 0x24c90018  addiu       $t1, $a2, 0x18
    ctx->pc = 0x364650u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x364654: 0x24ca000c  addiu       $t2, $a2, 0xC
    ctx->pc = 0x364654u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_364658:
    // 0x364658: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x364658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36465c: 0x1448002c  bne         $v0, $t0, . + 4 + (0x2C << 2)
    ctx->pc = 0x36465Cu;
    {
        const bool branch_taken_0x36465c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x364660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36465Cu;
        // 0x364660: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36465c) {
            ctx->pc = 0x364710u;
            goto label_364710;
        }
    }
    ctx->pc = 0x364664u;
    // 0x364664: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x364664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x364668: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x364668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x36466c: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x36466cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x364670: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x364670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x364674: 0x68a70017  ldl         $a3, 0x17($a1)
    ctx->pc = 0x364674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x364678: 0x6ca70010  ldr         $a3, 0x10($a1)
    ctx->pc = 0x364678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x36467c: 0x68a8001f  ldl         $t0, 0x1F($a1)
    ctx->pc = 0x36467cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x364680: 0x6ca80018  ldr         $t0, 0x18($a1)
    ctx->pc = 0x364680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x364684: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x364684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x364688: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x364688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36468c: 0xb083000f  sdl         $v1, 0xF($a0)
    ctx->pc = 0x36468cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x364690: 0xb4830008  sdr         $v1, 0x8($a0)
    ctx->pc = 0x364690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x364694: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x364694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x364698: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x364698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36469c: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x36469cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3646a0: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x3646a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3646a4: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x3646a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3646a8: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x3646a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x3646ac: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3646acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3646b0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3646b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3646b4: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x3646B4u;
    {
        const bool branch_taken_0x3646b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3646B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3646B4u;
        // 0x3646b8: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3646b4) {
            ctx->pc = 0x364708u;
            goto label_364708;
        }
    }
    ctx->pc = 0x3646BCu;
    // 0x3646bc: 0xac8bf600  sw          $t3, -0xA00($a0)
    ctx->pc = 0x3646bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294964736), GPR_U32(ctx, 11));
    // 0x3646c0: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x3646c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3646c4: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x3646c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3646c8: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x3646c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x3646cc: 0xb082f623  sdl         $v0, -0x9DD($a0)
    ctx->pc = 0x3646ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294964771); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3646d0: 0xb482f61c  sdr         $v0, -0x9E4($a0)
    ctx->pc = 0x3646d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294964764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3646d4: 0xac83f624  sw          $v1, -0x9DC($a0)
    ctx->pc = 0x3646d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294964772), GPR_U32(ctx, 3));
    // 0x3646d8: 0x68c80007  ldl         $t0, 0x7($a2)
    ctx->pc = 0x3646d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3646dc: 0x6cc80000  ldr         $t0, 0x0($a2)
    ctx->pc = 0x3646dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3646e0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3646e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3646e4: 0xb088f60b  sdl         $t0, -0x9F5($a0)
    ctx->pc = 0x3646e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294964747); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3646e8: 0xb488f604  sdr         $t0, -0x9FC($a0)
    ctx->pc = 0x3646e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294964740); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3646ec: 0xac82f60c  sw          $v0, -0x9F4($a0)
    ctx->pc = 0x3646ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294964748), GPR_U32(ctx, 2));
    // 0x3646f0: 0x69460007  ldl         $a2, 0x7($t2)
    ctx->pc = 0x3646f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3646f4: 0x6d460000  ldr         $a2, 0x0($t2)
    ctx->pc = 0x3646f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3646f8: 0x8d470008  lw          $a3, 0x8($t2)
    ctx->pc = 0x3646f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3646fc: 0xb086f617  sdl         $a2, -0x9E9($a0)
    ctx->pc = 0x3646fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294964759); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x364700: 0xb486f610  sdr         $a2, -0x9F0($a0)
    ctx->pc = 0x364700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294964752); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x364704: 0xac87f618  sw          $a3, -0x9E8($a0)
    ctx->pc = 0x364704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294964760), GPR_U32(ctx, 7));
label_364708:
    // 0x364708: 0x3e00008  jr          $ra
    ctx->pc = 0x364708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364708u;
        // 0x36470c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364710u;
label_364710:
    // 0x364710: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x364710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x364714: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x364714u;
    {
        const bool branch_taken_0x364714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x364718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364714u;
        // 0x364718: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364714) {
            ctx->pc = 0x364658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364658;
        }
    }
    ctx->pc = 0x36471Cu;
label_36471c:
    // 0x36471c: 0x3e00008  jr          $ra
    ctx->pc = 0x36471Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36471Cu;
        // 0x364720: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36471Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364724u;
    // 0x364724: 0x0  nop
    ctx->pc = 0x364724u;
    // NOP
label_364728:
    // 0x364728: 0x8c821400  lw          $v0, 0x1400($a0)
    ctx->pc = 0x364728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5120)));
    // 0x36472c: 0x1840002f  blez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x36472Cu;
    {
        const bool branch_taken_0x36472c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x364730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36472Cu;
        // 0x364730: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36472c) {
            ctx->pc = 0x3647ECu;
            goto label_3647ec;
        }
    }
    ctx->pc = 0x364734u;
    // 0x364734: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x364734u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364738: 0x24840a10  addiu       $a0, $a0, 0xA10
    ctx->pc = 0x364738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2576));
    // 0x36473c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x36473cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364740: 0x24c90018  addiu       $t1, $a2, 0x18
    ctx->pc = 0x364740u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x364744: 0x24ca000c  addiu       $t2, $a2, 0xC
    ctx->pc = 0x364744u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_364748:
    // 0x364748: 0x8c82fff0  lw          $v0, -0x10($a0)
    ctx->pc = 0x364748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x36474c: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x36474Cu;
    {
        const bool branch_taken_0x36474c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36474c) {
            ctx->pc = 0x364750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36474Cu;
            // 0x364750: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3647E0u;
            goto label_3647e0;
        }
    }
    ctx->pc = 0x364754u;
    // 0x364754: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x364754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x364758: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x364758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x36475c: 0x54620020  bnel        $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x36475Cu;
    {
        const bool branch_taken_0x36475c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x36475c) {
            ctx->pc = 0x364760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36475Cu;
            // 0x364760: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3647E0u;
            goto label_3647e0;
        }
    }
    ctx->pc = 0x364764u;
    // 0x364764: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x364764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x364768: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x364768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36476c: 0x94a20014  lhu         $v0, 0x14($a1)
    ctx->pc = 0x36476cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x364770: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x364770u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x364774: 0x94a3001c  lhu         $v1, 0x1C($a1)
    ctx->pc = 0x364774u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x364778: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x364778u;
    {
        const bool branch_taken_0x364778 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x36477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364778u;
        // 0x36477c: 0xa483000c  sh          $v1, 0xC($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364778) {
            ctx->pc = 0x3647D4u;
            goto label_3647d4;
        }
    }
    ctx->pc = 0x364780u;
    // 0x364780: 0x8c82f5f0  lw          $v0, -0xA10($a0)
    ctx->pc = 0x364780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294964720)));
    // 0x364784: 0x144b0013  bne         $v0, $t3, . + 4 + (0x13 << 2)
    ctx->pc = 0x364784u;
    {
        const bool branch_taken_0x364784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        if (branch_taken_0x364784) {
            ctx->pc = 0x3647D4u;
            goto label_3647d4;
        }
    }
    ctx->pc = 0x36478Cu;
    // 0x36478c: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x36478cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x364790: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x364790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x364794: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x364794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x364798: 0xb082f613  sdl         $v0, -0x9ED($a0)
    ctx->pc = 0x364798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294964755); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36479c: 0xb482f60c  sdr         $v0, -0x9F4($a0)
    ctx->pc = 0x36479cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294964748); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3647a0: 0xac83f614  sw          $v1, -0x9EC($a0)
    ctx->pc = 0x3647a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294964756), GPR_U32(ctx, 3));
    // 0x3647a4: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x3647a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3647a8: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x3647a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3647ac: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x3647acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3647b0: 0xb082f5fb  sdl         $v0, -0xA05($a0)
    ctx->pc = 0x3647b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294964731); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3647b4: 0xb482f5f4  sdr         $v0, -0xA0C($a0)
    ctx->pc = 0x3647b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294964724); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3647b8: 0xac83f5fc  sw          $v1, -0xA04($a0)
    ctx->pc = 0x3647b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294964732), GPR_U32(ctx, 3));
    // 0x3647bc: 0x69420007  ldl         $v0, 0x7($t2)
    ctx->pc = 0x3647bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3647c0: 0x6d420000  ldr         $v0, 0x0($t2)
    ctx->pc = 0x3647c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3647c4: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x3647c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3647c8: 0xb082f607  sdl         $v0, -0x9F9($a0)
    ctx->pc = 0x3647c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294964743); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3647cc: 0xb482f600  sdr         $v0, -0xA00($a0)
    ctx->pc = 0x3647ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294964736); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3647d0: 0xac83f608  sw          $v1, -0x9F8($a0)
    ctx->pc = 0x3647d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294964744), GPR_U32(ctx, 3));
label_3647d4:
    // 0x3647d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3647D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3647D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3647D4u;
        // 0x3647d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3647D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3647DCu;
    // 0x3647dc: 0x0  nop
    ctx->pc = 0x3647dcu;
    // NOP
label_3647e0:
    // 0x3647e0: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x3647e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x3647e4: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x3647E4u;
    {
        const bool branch_taken_0x3647e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3647E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3647E4u;
        // 0x3647e8: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3647e4) {
            ctx->pc = 0x364748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364748;
        }
    }
    ctx->pc = 0x3647ECu;
label_3647ec:
    // 0x3647ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3647ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3647F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3647ECu;
        // 0x3647f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3647ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3647F4u;
    // 0x3647f4: 0x0  nop
    ctx->pc = 0x3647f4u;
    // NOP
    ctx->pc = 0x3647f8u;
}
