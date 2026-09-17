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

// Function: sub_002F74E0
// Address: 0x2f74e0 - 0x2f7700
void sub_002F74E0_0x2f74e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F74E0_0x2f74e0");
#endif

    switch (ctx->pc) {
        case 0x2f754cu: goto label_2f754c;
        case 0x2f755cu: goto label_2f755c;
        case 0x2f7570u: goto label_2f7570;
        case 0x2f7584u: goto label_2f7584;
        case 0x2f7598u: goto label_2f7598;
        default: break;
    }

    ctx->pc = 0x2f74e0u;

    // 0x2f74e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f74e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f74e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f74e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f74e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f74e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f74ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f74ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f74f0: 0x2604015c  addiu       $a0, $s0, 0x15C
    ctx->pc = 0x2f74f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 348));
    // 0x2f74f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f74f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f74f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f74f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2f74fc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2f74fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2f7500: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2f7500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2f7504: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f7504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f7508: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f7508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f750c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F750Cu;
    {
        const bool branch_taken_0x2f750c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F750Cu;
        // 0x2f7510: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f750c) {
            ctx->pc = 0x2F7524u;
            goto label_2f7524;
        }
    }
    ctx->pc = 0x2F7514u;
    // 0x2f7514: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f7514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f7518: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2f7518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f751c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F751Cu;
    {
        const bool branch_taken_0x2f751c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f751c) {
            ctx->pc = 0x2F7520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F751Cu;
            // 0x2f7520: 0x8e1100ec  lw          $s1, 0xEC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7534u;
            goto label_2f7534;
        }
    }
    ctx->pc = 0x2F7524u;
label_2f7524:
    // 0x2f7524: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2f7524u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2f7528: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f7528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f752c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2f752cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2f7530: 0x8e1100ec  lw          $s1, 0xEC($s0)
    ctx->pc = 0x2f7530u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_2f7534:
    // 0x2f7534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7538: 0x8ca20120  lw          $v0, 0x120($a1)
    ctx->pc = 0x2f7538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 288)));
    // 0x2f753c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f753cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7540: 0x8e1500f0  lw          $s5, 0xF0($s0)
    ctx->pc = 0x2f7540u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2f7544: 0xc0bddc0  jal         func_2F7700
    ctx->pc = 0x2F7544u;
    SET_GPR_U32(ctx, 31, 0x2F754Cu);
    ctx->pc = 0x2F7548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7544u;
    // 0x2f7548: 0x2c530001  sltiu       $s3, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7700u, 0x2F7544u, 0x2F754Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F754Cu;
label_2f754c:
    // 0x2f754c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f754cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7550: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f7550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7554: 0xc0bddd6  jal         func_2F7758
    ctx->pc = 0x2F7554u;
    SET_GPR_U32(ctx, 31, 0x2F755Cu);
    ctx->pc = 0x2F7558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7554u;
    // 0x2f7558: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7758u, 0x2F7554u, 0x2F755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F755Cu;
label_2f755c:
    // 0x2f755c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f755cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7560: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f7560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7564: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f7564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7568: 0xc0bdb32  jal         func_2F6CC8
    ctx->pc = 0x2F7568u;
    SET_GPR_U32(ctx, 31, 0x2F7570u);
    ctx->pc = 0x2F756Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7568u;
    // 0x2f756c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6CC8u, 0x2F7568u, 0x2F7570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7570u;
label_2f7570:
    // 0x2f7570: 0x12340004  beq         $s1, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7570u;
    {
        const bool branch_taken_0x2f7570 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x2F7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7570u;
        // 0x2f7574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7570) {
            ctx->pc = 0x2F7584u;
            goto label_2f7584;
        }
    }
    ctx->pc = 0x2F7578u;
    // 0x2f7578: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f7578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f757c: 0xc0bdb32  jal         func_2F6CC8
    ctx->pc = 0x2F757Cu;
    SET_GPR_U32(ctx, 31, 0x2F7584u);
    ctx->pc = 0x2F7580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F757Cu;
    // 0x2f7580: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6CC8u, 0x2F757Cu, 0x2F7584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7584u;
label_2f7584:
    // 0x2f7584: 0x12320004  beq         $s1, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7584u;
    {
        const bool branch_taken_0x2f7584 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x2F7588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7584u;
        // 0x2f7588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7584) {
            ctx->pc = 0x2F7598u;
            goto label_2f7598;
        }
    }
    ctx->pc = 0x2F758Cu;
    // 0x2f758c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f758cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7590: 0xc0bdb32  jal         func_2F6CC8
    ctx->pc = 0x2F7590u;
    SET_GPR_U32(ctx, 31, 0x2F7598u);
    ctx->pc = 0x2F7594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7590u;
    // 0x2f7594: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6CC8u, 0x2F7590u, 0x2F7598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7598u;
label_2f7598:
    // 0x2f7598: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x2f7598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2f759c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F759Cu;
    {
        const bool branch_taken_0x2f759c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F75A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F759Cu;
        // 0x2f75a0: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f759c) {
            ctx->pc = 0x2F75A8u;
            goto label_2f75a8;
        }
    }
    ctx->pc = 0x2F75A4u;
    // 0x2f75a4: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x2f75a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_2f75a8:
    // 0x2f75a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f75a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f75ac: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x2f75acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x2f75b0: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x2f75b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2f75b4: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x2f75b4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2f75b8: 0x12510003  beq         $s2, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F75B8u;
    {
        const bool branch_taken_0x2f75b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x2F75BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F75B8u;
        // 0x2f75bc: 0xae0300f4  sw          $v1, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f75b8) {
            ctx->pc = 0x2F75C8u;
            goto label_2f75c8;
        }
    }
    ctx->pc = 0x2F75C0u;
    // 0x2f75c0: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F75C0u;
    {
        const bool branch_taken_0x2f75c0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2F75C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F75C0u;
        // 0x2f75c4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f75c0) {
            ctx->pc = 0x2F75CCu;
            goto label_2f75cc;
        }
    }
    ctx->pc = 0x2F75C8u;
label_2f75c8:
    // 0x2f75c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f75c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f75cc:
    // 0x2f75cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F75CCu;
    {
        const bool branch_taken_0x2f75cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F75D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F75CCu;
        // 0x2f75d0: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f75cc) {
            ctx->pc = 0x2F75E0u;
            goto label_2f75e0;
        }
    }
    ctx->pc = 0x2F75D4u;
    // 0x2f75d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F75D4u;
    {
        const bool branch_taken_0x2f75d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F75D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F75D4u;
        // 0x2f75d8: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f75d4) {
            ctx->pc = 0x2F75E8u;
            goto label_2f75e8;
        }
    }
    ctx->pc = 0x2F75DCu;
    // 0x2f75dc: 0x0  nop
    ctx->pc = 0x2f75dcu;
    // NOP
label_2f75e0:
    // 0x2f75e0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f75e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f75e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f75e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f75e8:
    // 0x2f75e8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f75e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f75ec: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x2f75ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2f75f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f75f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f75f4: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2f75f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f75f8: 0x262180b  movn        $v1, $s3, $v0
    ctx->pc = 0x2f75f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 19));
    // 0x2f75fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F75FCu;
    {
        const bool branch_taken_0x2f75fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F75FCu;
        // 0x2f7600: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f75fc) {
            ctx->pc = 0x2F7610u;
            goto label_2f7610;
        }
    }
    ctx->pc = 0x2F7604u;
    // 0x2f7604: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f7604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f7608: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7608u;
    {
        const bool branch_taken_0x2f7608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7608u;
        // 0x2f760c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7608) {
            ctx->pc = 0x2F761Cu;
            goto label_2f761c;
        }
    }
    ctx->pc = 0x2F7610u;
label_2f7610:
    // 0x2f7610: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f7610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f7614: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f7614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f7618: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f7618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f761c:
    // 0x2f761c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f761cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f7620: 0x2b1102a  slt         $v0, $s5, $s1
    ctx->pc = 0x2f7620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2f7624: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F7624u;
    {
        const bool branch_taken_0x2f7624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7624u;
        // 0x2f7628: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7624) {
            ctx->pc = 0x2F7630u;
            goto label_2f7630;
        }
    }
    ctx->pc = 0x2F762Cu;
    // 0x2f762c: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x2f762cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_2f7630:
    // 0x2f7630: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f7630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f7634: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x2f7634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x2f7638: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x2f7638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2f763c: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x2f763cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2f7640: 0x12910003  beq         $s4, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7640u;
    {
        const bool branch_taken_0x2f7640 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 17));
        ctx->pc = 0x2F7644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7640u;
        // 0x2f7644: 0xae0300f8  sw          $v1, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7640) {
            ctx->pc = 0x2F7650u;
            goto label_2f7650;
        }
    }
    ctx->pc = 0x2F7648u;
    // 0x2f7648: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F7648u;
    {
        const bool branch_taken_0x2f7648 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2F764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7648u;
        // 0x2f764c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7648) {
            ctx->pc = 0x2F7654u;
            goto label_2f7654;
        }
    }
    ctx->pc = 0x2F7650u;
label_2f7650:
    // 0x2f7650: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f7650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7654:
    // 0x2f7654: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7654u;
    {
        const bool branch_taken_0x2f7654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7654u;
        // 0x2f7658: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7654) {
            ctx->pc = 0x2F7668u;
            goto label_2f7668;
        }
    }
    ctx->pc = 0x2F765Cu;
    // 0x2f765c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F765Cu;
    {
        const bool branch_taken_0x2f765c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F765Cu;
        // 0x2f7660: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f765c) {
            ctx->pc = 0x2F7670u;
            goto label_2f7670;
        }
    }
    ctx->pc = 0x2F7664u;
    // 0x2f7664: 0x0  nop
    ctx->pc = 0x2f7664u;
    // NOP
label_2f7668:
    // 0x2f7668: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f7668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f766c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f766cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f7670:
    // 0x2f7670: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f7670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f7674: 0x8e0200f8  lw          $v0, 0xF8($s0)
    ctx->pc = 0x2f7674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x2f7678: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f7678u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f767c: 0x8e0500e4  lw          $a1, 0xE4($s0)
    ctx->pc = 0x2f767cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2f7680: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f7680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f7684: 0x2202a  slt         $a0, $zero, $v0
    ctx->pc = 0x2f7684u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f7688: 0x264180b  movn        $v1, $s3, $a0
    ctx->pc = 0x2f7688u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 19));
    // 0x2f768c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F768Cu;
    {
        const bool branch_taken_0x2f768c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F768Cu;
        // 0x2f7690: 0xae0200f8  sw          $v0, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f768c) {
            ctx->pc = 0x2F76A0u;
            goto label_2f76a0;
        }
    }
    ctx->pc = 0x2F7694u;
    // 0x2f7694: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x2f7694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x2f7698: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7698u;
    {
        const bool branch_taken_0x2f7698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7698u;
        // 0x2f769c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7698) {
            ctx->pc = 0x2F76ACu;
            goto label_2f76ac;
        }
    }
    ctx->pc = 0x2F76A0u;
label_2f76a0:
    // 0x2f76a0: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x2f76a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x2f76a4: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f76a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f76a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f76a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f76ac:
    // 0x2f76ac: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x2f76acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
    // 0x2f76b0: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x2f76b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x2f76b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F76B4u;
    {
        const bool branch_taken_0x2f76b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F76B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F76B4u;
        // 0x2f76b8: 0x8e0400e8  lw          $a0, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f76b4) {
            ctx->pc = 0x2F76C8u;
            goto label_2f76c8;
        }
    }
    ctx->pc = 0x2F76BCu;
    // 0x2f76bc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f76bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f76c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F76C0u;
    {
        const bool branch_taken_0x2f76c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F76C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F76C0u;
        // 0x2f76c4: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f76c0) {
            ctx->pc = 0x2F76D4u;
            goto label_2f76d4;
        }
    }
    ctx->pc = 0x2F76C8u;
label_2f76c8:
    // 0x2f76c8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f76c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f76cc: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f76ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f76d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f76d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f76d4:
    // 0x2f76d4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f76d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f76d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f76d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f76dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f76dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f76e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f76e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f76e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f76e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f76e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2f76e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f76ec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2f76ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f76f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f76f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f76f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F76F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F76F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F76F4u;
        // 0x2f76f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F76F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F76FCu;
    // 0x2f76fc: 0x0  nop
    ctx->pc = 0x2f76fcu;
    // NOP
    ctx->pc = 0x2f7700u;
}
