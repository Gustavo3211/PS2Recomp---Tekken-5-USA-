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

// Function: sub_002DB9C8
// Address: 0x2db9c8 - 0x2dbaf8
void sub_002DB9C8_0x2db9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB9C8_0x2db9c8");
#endif

    switch (ctx->pc) {
        case 0x2dba04u: goto label_2dba04;
        case 0x2dba54u: goto label_2dba54;
        case 0x2dba78u: goto label_2dba78;
        case 0x2dba80u: goto label_2dba80;
        case 0x2dbac0u: goto label_2dbac0;
        case 0x2dbadcu: goto label_2dbadc;
        default: break;
    }

    ctx->pc = 0x2db9c8u;

    // 0x2db9c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2db9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2db9cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2db9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2db9d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2db9d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db9d4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2db9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2db9d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2db9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2db9dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2db9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2db9e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2db9e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db9e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2db9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2db9e8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2db9e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db9ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2db9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2db9f0: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x2db9f0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x2db9f4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x2db9f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2db9f8: 0x8e7388d0  lw          $s3, -0x7730($s3)
    ctx->pc = 0x2db9f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936784)));
    // 0x2db9fc: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x2DB9FCu;
    SET_GPR_U32(ctx, 31, 0x2DBA04u);
    ctx->pc = 0x2DBA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB9FCu;
    // 0x2dba00: 0x86640042  lh          $a0, 0x42($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x2DB9FCu, 0x2DBA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA04u;
label_2dba04:
    // 0x2dba04: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2dba04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2dba08: 0x54430035  bnel        $v0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2DBA08u;
    {
        const bool branch_taken_0x2dba08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dba08) {
            ctx->pc = 0x2DBA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBA08u;
            // 0x2dba0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBAE0u;
            goto label_2dbae0;
        }
    }
    ctx->pc = 0x2DBA10u;
    // 0x2dba10: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2dba10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2dba14: 0x2785cb60  addiu       $a1, $gp, -0x34A0
    ctx->pc = 0x2dba14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953824));
    // 0x2dba18: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2dba18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2dba1c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x2dba1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2dba20: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2dba20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2dba24: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2DBA24u;
    {
        const bool branch_taken_0x2dba24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA24u;
        // 0x2dba28: 0x94a40000  lhu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dba24) {
            ctx->pc = 0x2DBADCu;
            goto label_2dbadc;
        }
    }
    ctx->pc = 0x2DBA2Cu;
    // 0x2dba2c: 0x111027  nor         $v0, $zero, $s1
    ctx->pc = 0x2dba2cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
    // 0x2dba30: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2dba30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2dba34: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2dba34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2dba38: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x2dba38u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dba3c: 0x8e510014  lw          $s1, 0x14($s2)
    ctx->pc = 0x2dba3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2dba40: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x2dba40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2dba44: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DBA44u;
    {
        const bool branch_taken_0x2dba44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA44u;
        // 0x2dba48: 0x2463f2f0  addiu       $v1, $v1, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dba44) {
            ctx->pc = 0x2DBA60u;
            goto label_2dba60;
        }
    }
    ctx->pc = 0x2DBA4Cu;
    // 0x2dba4c: 0xc0bf32c  jal         func_2FCCB0
    ctx->pc = 0x2DBA4Cu;
    SET_GPR_U32(ctx, 31, 0x2DBA54u);
    ctx->pc = 0x2DBA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBA4Cu;
    // 0x2dba50: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCCB0u, 0x2DBA4Cu, 0x2DBA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA54u;
label_2dba54:
    // 0x2dba54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DBA54u;
    {
        const bool branch_taken_0x2dba54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA54u;
        // 0x2dba58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dba54) {
            ctx->pc = 0x2DBA64u;
            goto label_2dba64;
        }
    }
    ctx->pc = 0x2DBA5Cu;
    // 0x2dba5c: 0x0  nop
    ctx->pc = 0x2dba5cu;
    // NOP
label_2dba60:
    // 0x2dba60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2dba60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dba64:
    // 0x2dba64: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2DBA64u;
    {
        const bool branch_taken_0x2dba64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA64u;
        // 0x2dba68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dba64) {
            ctx->pc = 0x2DBADCu;
            goto label_2dbadc;
        }
    }
    ctx->pc = 0x2DBA6Cu;
    // 0x2dba6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dba6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba70: 0xc0b6cf4  jal         func_2DB3D0
    ctx->pc = 0x2DBA70u;
    SET_GPR_U32(ctx, 31, 0x2DBA78u);
    ctx->pc = 0x2DBA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBA70u;
    // 0x2dba74: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB3D0u, 0x2DBA70u, 0x2DBA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA78u;
label_2dba78:
    // 0x2dba78: 0xc082ffe  jal         func_20BFF8
    ctx->pc = 0x2DBA78u;
    SET_GPR_U32(ctx, 31, 0x2DBA80u);
    ctx->pc = 0x20BFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BFF8u, 0x2DBA78u, 0x2DBA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA80u;
label_2dba80:
    // 0x2dba80: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2DBA80u;
    {
        const bool branch_taken_0x2dba80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA80u;
        // 0x2dba84: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dba80) {
            ctx->pc = 0x2DBADCu;
            goto label_2dbadc;
        }
    }
    ctx->pc = 0x2DBA88u;
    // 0x2dba88: 0x8663003e  lh          $v1, 0x3E($s3)
    ctx->pc = 0x2dba88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 62)));
    // 0x2dba8c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DBA8Cu;
    {
        const bool branch_taken_0x2dba8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DBA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA8Cu;
        // 0x2dba90: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dba8c) {
            ctx->pc = 0x2DBAA8u;
            goto label_2dbaa8;
        }
    }
    ctx->pc = 0x2DBA94u;
    // 0x2dba94: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DBA94u;
    {
        const bool branch_taken_0x2dba94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2dba94) {
            ctx->pc = 0x2DBA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBA94u;
            // 0x2dba98: 0x3c070048  lui         $a3, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBAC8u;
            goto label_2dbac8;
        }
    }
    ctx->pc = 0x2DBA9Cu;
    // 0x2dba9c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2DBA9Cu;
    {
        const bool branch_taken_0x2dba9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA9Cu;
        // 0x2dbaa0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dba9c) {
            ctx->pc = 0x2DBAE0u;
            goto label_2dbae0;
        }
    }
    ctx->pc = 0x2DBAA4u;
    // 0x2dbaa4: 0x0  nop
    ctx->pc = 0x2dbaa4u;
    // NOP
label_2dbaa8:
    // 0x2dbaa8: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x2dbaa8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x2dbaac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dbaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbab0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dbab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbab4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2dbab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbab8: 0xc0b6d46  jal         func_2DB518
    ctx->pc = 0x2DBAB8u;
    SET_GPR_U32(ctx, 31, 0x2DBAC0u);
    ctx->pc = 0x2DBABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBAB8u;
    // 0x2dbabc: 0x24e7f330  addiu       $a3, $a3, -0xCD0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB518u, 0x2DBAB8u, 0x2DBAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBAC0u;
label_2dbac0:
    // 0x2dbac0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DBAC0u;
    {
        const bool branch_taken_0x2dbac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBAC0u;
        // 0x2dbac4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbac0) {
            ctx->pc = 0x2DBAE0u;
            goto label_2dbae0;
        }
    }
    ctx->pc = 0x2DBAC8u;
label_2dbac8:
    // 0x2dbac8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dbac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbacc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dbaccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbad0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2dbad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbad4: 0xc0b6d46  jal         func_2DB518
    ctx->pc = 0x2DBAD4u;
    SET_GPR_U32(ctx, 31, 0x2DBADCu);
    ctx->pc = 0x2DBAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBAD4u;
    // 0x2dbad8: 0x24e7f348  addiu       $a3, $a3, -0xCB8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB518u, 0x2DBAD4u, 0x2DBADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBADCu;
label_2dbadc:
    // 0x2dbadc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dbadcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dbae0:
    // 0x2dbae0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dbae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dbae4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2dbae4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dbae8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2dbae8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dbaec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dbaecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dbaf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBAF0u;
        // 0x2dbaf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBAF8u;
}
