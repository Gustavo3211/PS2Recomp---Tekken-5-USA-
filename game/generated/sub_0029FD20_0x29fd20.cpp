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

// Function: sub_0029FD20
// Address: 0x29fd20 - 0x29ff70
void sub_0029FD20_0x29fd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029FD20_0x29fd20");
#endif

    switch (ctx->pc) {
        case 0x29fd44u: goto label_29fd44;
        case 0x29fd50u: goto label_29fd50;
        case 0x29fdc8u: goto label_29fdc8;
        case 0x29fe34u: goto label_29fe34;
        default: break;
    }

    ctx->pc = 0x29fd20u;

    // 0x29fd20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29fd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29fd24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29fd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29fd28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29fd28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fd2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29fd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29fd30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29fd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29fd34: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x29fd34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29fd38: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x29fd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x29fd3c: 0xc086620  jal         func_219880
    ctx->pc = 0x29FD3Cu;
    SET_GPR_U32(ctx, 31, 0x29FD44u);
    ctx->pc = 0x29FD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FD3Cu;
    // 0x29fd40: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x219880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219880u, 0x29FD3Cu, 0x29FD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FD44u;
label_29fd44:
    // 0x29fd44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29fd44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fd48: 0xc08661c  jal         func_219870
    ctx->pc = 0x29FD48u;
    SET_GPR_U32(ctx, 31, 0x29FD50u);
    ctx->pc = 0x29FD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FD48u;
    // 0x29fd4c: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219870u, 0x29FD48u, 0x29FD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FD50u;
label_29fd50:
    // 0x29fd50: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x29fd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x29fd54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29fd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29fd58: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29FD58u;
    {
        const bool branch_taken_0x29fd58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29fd58) {
            ctx->pc = 0x29FD5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29FD58u;
            // 0x29fd5c: 0x8e220090  lw          $v0, 0x90($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FD70u;
            goto label_29fd70;
        }
    }
    ctx->pc = 0x29FD60u;
    // 0x29fd60: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x29fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x29fd64: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x29FD64u;
    {
        const bool branch_taken_0x29fd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD64u;
        // 0x29fd68: 0x8c458880  lw          $a1, -0x7780($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fd64) {
            ctx->pc = 0x29FD9Cu;
            goto label_29fd9c;
        }
    }
    ctx->pc = 0x29FD6Cu;
    // 0x29fd6c: 0x0  nop
    ctx->pc = 0x29fd6cu;
    // NOP
label_29fd70:
    // 0x29fd70: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x29fd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x29fd74: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x29fd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x29fd78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29fd7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29fd80: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x29fd80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x29fd84: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29FD84u;
    {
        const bool branch_taken_0x29fd84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x29fd84) {
            ctx->pc = 0x29FD88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29FD84u;
            // 0x29fd88: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FDA0u;
            goto label_29fda0;
        }
    }
    ctx->pc = 0x29FD8Cu;
    // 0x29fd8c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x29fd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x29fd90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29fd94: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29fd98: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x29fd98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_29fd9c:
    // 0x29fd9c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x29fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_29fda0:
    // 0x29fda0: 0x10a2001d  beq         $a1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x29FDA0u;
    {
        const bool branch_taken_0x29fda0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x29FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FDA0u;
        // 0x29fda4: 0x52080  sll         $a0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fda0) {
            ctx->pc = 0x29FE18u;
            goto label_29fe18;
        }
    }
    ctx->pc = 0x29FDA8u;
    // 0x29fda8: 0x4a30001  bgezl       $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x29FDA8u;
    {
        const bool branch_taken_0x29fda8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x29fda8) {
            ctx->pc = 0x29FDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29FDA8u;
            // 0x29fdac: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FDB0u;
            goto label_29fdb0;
        }
    }
    ctx->pc = 0x29FDB0u;
label_29fdb0:
    // 0x29fdb0: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x29fdb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x29fdb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29fdb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fdb8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x29fdb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fdbc: 0x2409efff  addiu       $t1, $zero, -0x1001
    ctx->pc = 0x29fdbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29fdc0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x29fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x29fdc4: 0x0  nop
    ctx->pc = 0x29fdc4u;
    // NOP
label_29fdc8:
    // 0x29fdc8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x29fdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x29fdcc: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x29fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x29fdd0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29fdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29fdd4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29FDD4u;
    {
        const bool branch_taken_0x29fdd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FDD4u;
        // 0x29fdd8: 0x28c40011  slti        $a0, $a2, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fdd4) {
            ctx->pc = 0x29FDE8u;
            goto label_29fde8;
        }
    }
    ctx->pc = 0x29FDDCu;
    // 0x29fddc: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29fde0: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x29fde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x29fde4: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x29fde4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_29fde8:
    // 0x29fde8: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x29FDE8u;
    {
        const bool branch_taken_0x29fde8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FDE8u;
        // 0x29fdec: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fde8) {
            ctx->pc = 0x29FDC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fdc8;
        }
    }
    ctx->pc = 0x29FDF0u;
    // 0x29fdf0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x29fdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29fdf4: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x29fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x29fdf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29fdfc: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x29FDFCu;
    {
        const bool branch_taken_0x29fdfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fdfc) {
            ctx->pc = 0x29FE00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29FDFCu;
            // 0x29fe00: 0x8e2300a0  lw          $v1, 0xA0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FE38u;
            goto label_29fe38;
        }
    }
    ctx->pc = 0x29FE04u;
    // 0x29fe04: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29fe08: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x29fe08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x29fe0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29FE0Cu;
    {
        const bool branch_taken_0x29fe0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FE0Cu;
        // 0x29fe10: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fe0c) {
            ctx->pc = 0x29FE1Cu;
            goto label_29fe1c;
        }
    }
    ctx->pc = 0x29FE14u;
    // 0x29fe14: 0x0  nop
    ctx->pc = 0x29fe14u;
    // NOP
label_29fe18:
    // 0x29fe18: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x29fe18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_29fe1c:
    // 0x29fe1c: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x29fe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x29fe20: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29fe20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29fe24: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29FE24u;
    {
        const bool branch_taken_0x29fe24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FE24u;
        // 0x29fe28: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fe24) {
            ctx->pc = 0x29FE34u;
            goto label_29fe34;
        }
    }
    ctx->pc = 0x29FE2Cu;
    // 0x29fe2c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29FE2Cu;
    SET_GPR_U32(ctx, 31, 0x29FE34u);
    ctx->pc = 0x29FE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FE2Cu;
    // 0x29fe30: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29FE2Cu, 0x29FE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FE34u;
label_29fe34:
    // 0x29fe34: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x29fe34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_29fe38:
    // 0x29fe38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29fe3c: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x29FE3Cu;
    {
        const bool branch_taken_0x29fe3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29FE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FE3Cu;
        // 0x29fe40: 0x123080  sll         $a2, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fe3c) {
            ctx->pc = 0x29FE90u;
            goto label_29fe90;
        }
    }
    ctx->pc = 0x29FE44u;
    // 0x29fe44: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x29fe44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x29fe48: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x29fe48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29fe4c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29fe50: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x29fe50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x29fe54: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29fe54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29fe58: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x29fe58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x29fe5c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29fe60: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x29fe60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x29fe64: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x29fe64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x29fe68: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x29fe68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x29fe6c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29fe70: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x29fe70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x29fe74: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29fe74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29fe78: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x29fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x29fe7c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29fe80: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x29fe80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x29fe84: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x29FE84u;
    {
        const bool branch_taken_0x29fe84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FE84u;
        // 0x29fe88: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fe84) {
            ctx->pc = 0x29FF50u;
            goto label_29ff50;
        }
    }
    ctx->pc = 0x29FE8Cu;
    // 0x29fe8c: 0x0  nop
    ctx->pc = 0x29fe8cu;
    // NOP
label_29fe90:
    // 0x29fe90: 0xdc1021  addu        $v0, $a2, $gp
    ctx->pc = 0x29fe90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 28)));
    // 0x29fe94: 0x8c42a858  lw          $v0, -0x57A8($v0)
    ctx->pc = 0x29fe94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944856)));
    // 0x29fe98: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x29fe98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
    // 0x29fe9c: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x29fe9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29fea0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29FEA0u;
    {
        const bool branch_taken_0x29fea0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FEA0u;
        // 0x29fea4: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fea0) {
            ctx->pc = 0x29FEB8u;
            goto label_29feb8;
        }
    }
    ctx->pc = 0x29FEA8u;
    // 0x29fea8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29feac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29FEACu;
    {
        const bool branch_taken_0x29feac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FEACu;
        // 0x29feb0: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29feac) {
            ctx->pc = 0x29FEC4u;
            goto label_29fec4;
        }
    }
    ctx->pc = 0x29FEB4u;
    // 0x29feb4: 0x0  nop
    ctx->pc = 0x29feb4u;
    // NOP
label_29feb8:
    // 0x29feb8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29febc: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x29febcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29fec0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29fec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29fec4:
    // 0x29fec4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29fec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29fec8: 0x2ca20001  sltiu       $v0, $a1, 0x1
    ctx->pc = 0x29fec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x29fecc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29FECCu;
    {
        const bool branch_taken_0x29fecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FECCu;
        // 0x29fed0: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fecc) {
            ctx->pc = 0x29FEE0u;
            goto label_29fee0;
        }
    }
    ctx->pc = 0x29FED4u;
    // 0x29fed4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29fed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29fed8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29FED8u;
    {
        const bool branch_taken_0x29fed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FED8u;
        // 0x29fedc: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fed8) {
            ctx->pc = 0x29FEECu;
            goto label_29feec;
        }
    }
    ctx->pc = 0x29FEE0u;
label_29fee0:
    // 0x29fee0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29fee4: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x29fee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29fee8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29fee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29feec:
    // 0x29feec: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29feecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29fef0: 0xdc1021  addu        $v0, $a2, $gp
    ctx->pc = 0x29fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 28)));
    // 0x29fef4: 0x8c42a858  lw          $v0, -0x57A8($v0)
    ctx->pc = 0x29fef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944856)));
    // 0x29fef8: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x29fef8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x29fefc: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x29fefcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29ff00: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29FF00u;
    {
        const bool branch_taken_0x29ff00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FF00u;
        // 0x29ff04: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ff00) {
            ctx->pc = 0x29FF18u;
            goto label_29ff18;
        }
    }
    ctx->pc = 0x29FF08u;
    // 0x29ff08: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29ff08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29ff0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29FF0Cu;
    {
        const bool branch_taken_0x29ff0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FF0Cu;
        // 0x29ff10: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ff0c) {
            ctx->pc = 0x29FF24u;
            goto label_29ff24;
        }
    }
    ctx->pc = 0x29FF14u;
    // 0x29ff14: 0x0  nop
    ctx->pc = 0x29ff14u;
    // NOP
label_29ff18:
    // 0x29ff18: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29ff18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29ff1c: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x29ff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29ff20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29ff20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29ff24:
    // 0x29ff24: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29ff24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29ff28: 0x2ca20001  sltiu       $v0, $a1, 0x1
    ctx->pc = 0x29ff28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x29ff2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29FF2Cu;
    {
        const bool branch_taken_0x29ff2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FF2Cu;
        // 0x29ff30: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ff2c) {
            ctx->pc = 0x29FF40u;
            goto label_29ff40;
        }
    }
    ctx->pc = 0x29FF34u;
    // 0x29ff34: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29ff38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29FF38u;
    {
        const bool branch_taken_0x29ff38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FF38u;
        // 0x29ff3c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ff38) {
            ctx->pc = 0x29FF4Cu;
            goto label_29ff4c;
        }
    }
    ctx->pc = 0x29FF40u;
label_29ff40:
    // 0x29ff40: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29ff44: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x29ff44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29ff48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29ff48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29ff4c:
    // 0x29ff4c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29ff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_29ff50:
    // 0x29ff50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29ff50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ff54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29ff54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29ff58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29ff58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ff5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x29ff5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ff60: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x29ff60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29ff64: 0x3e00008  jr          $ra
    ctx->pc = 0x29FF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FF64u;
        // 0x29ff68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29FF6Cu;
    // 0x29ff6c: 0x0  nop
    ctx->pc = 0x29ff6cu;
    // NOP
    ctx->pc = 0x29ff70u;
}
