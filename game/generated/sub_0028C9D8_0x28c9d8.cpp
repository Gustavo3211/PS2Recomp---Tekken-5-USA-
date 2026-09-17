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

// Function: sub_0028C9D8
// Address: 0x28c9d8 - 0x28cba0
void sub_0028C9D8_0x28c9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C9D8_0x28c9d8");
#endif

    switch (ctx->pc) {
        case 0x28ca48u: goto label_28ca48;
        case 0x28cac4u: goto label_28cac4;
        case 0x28cadcu: goto label_28cadc;
        case 0x28caf8u: goto label_28caf8;
        case 0x28cb50u: goto label_28cb50;
        case 0x28cb68u: goto label_28cb68;
        default: break;
    }

    ctx->pc = 0x28c9d8u;

    // 0x28c9d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28c9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28c9dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28c9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28c9e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28c9e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c9e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x28c9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x28c9e8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28c9e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c9ec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x28c9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x28c9f0: 0x2414003c  addiu       $s4, $zero, 0x3C
    ctx->pc = 0x28c9f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x28c9f4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x28c9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x28c9f8: 0x2415efff  addiu       $s5, $zero, -0x1001
    ctx->pc = 0x28c9f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28c9fc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x28c9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x28ca00: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x28ca00u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28ca04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28ca08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28ca08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28ca0c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x28ca0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x28ca10: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x28ca10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x28ca14: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x28ca14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x28ca18: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x28ca18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x28ca1c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x28ca1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x28ca20: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x28ca20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x28ca24: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x28ca24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x28ca28: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x28ca28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x28ca2c: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x28ca2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x28ca30: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x28ca30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x28ca34: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x28ca34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x28ca38: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x28ca38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
    // 0x28ca3c: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x28ca3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
    // 0x28ca40: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x28ca40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x28ca44: 0x0  nop
    ctx->pc = 0x28ca44u;
    // NOP
label_28ca48:
    // 0x28ca48: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x28ca48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x28ca4c: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x28ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x28ca50: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x28ca50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x28ca54: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x28ca54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x28ca58: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x28ca58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28ca5c: 0x751824  and         $v1, $v1, $s5
    ctx->pc = 0x28ca5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
    // 0x28ca60: 0x12c0001e  beqz        $s6, . + 4 + (0x1E << 2)
    ctx->pc = 0x28CA60u;
    {
        const bool branch_taken_0x28ca60 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CA60u;
        // 0x28ca64: 0xac830080  sw          $v1, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ca60) {
            ctx->pc = 0x28CADCu;
            goto label_28cadc;
        }
    }
    ctx->pc = 0x28CA68u;
    // 0x28ca68: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x28ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x28ca6c: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x28ca6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28ca70: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x28ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x28ca74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28ca74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ca78: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x28ca78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca7c: 0x10740004  beq         $v1, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x28CA7Cu;
    {
        const bool branch_taken_0x28ca7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x28CA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CA7Cu;
        // 0x28ca80: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ca7c) {
            ctx->pc = 0x28CA90u;
            goto label_28ca90;
        }
    }
    ctx->pc = 0x28CA84u;
    // 0x28ca84: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x28ca84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x28ca88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28CA88u;
    {
        const bool branch_taken_0x28ca88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CA88u;
        // 0x28ca8c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ca88) {
            ctx->pc = 0x28CA98u;
            goto label_28ca98;
        }
    }
    ctx->pc = 0x28CA90u;
label_28ca90:
    // 0x28ca90: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28ca90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28ca94: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x28ca94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ca98:
    // 0x28ca98: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28CA98u;
    {
        const bool branch_taken_0x28ca98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ca98) {
            ctx->pc = 0x28CA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CA98u;
            // 0x28ca9c: 0x8e51003c  lw          $s1, 0x3C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CAB8u;
            goto label_28cab8;
        }
    }
    ctx->pc = 0x28CAA0u;
    // 0x28caa0: 0x8ce30080  lw          $v1, 0x80($a3)
    ctx->pc = 0x28caa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x28caa4: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x28caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x28caa8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28caa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28caac: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28CAACu;
    {
        const bool branch_taken_0x28caac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CAACu;
        // 0x28cab0: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28caac) {
            ctx->pc = 0x28CAE0u;
            goto label_28cae0;
        }
    }
    ctx->pc = 0x28CAB4u;
    // 0x28cab4: 0x8e51003c  lw          $s1, 0x3C($s2)
    ctx->pc = 0x28cab4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_28cab8:
    // 0x28cab8: 0x8cb00080  lw          $s0, 0x80($a1)
    ctx->pc = 0x28cab8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x28cabc: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x28CABCu;
    SET_GPR_U32(ctx, 31, 0x28CAC4u);
    ctx->pc = 0x28CAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CABCu;
    // 0x28cac0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x28CABCu, 0x28CAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CAC4u;
label_28cac4:
    // 0x28cac4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28cac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cac8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28cac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cacc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28CACCu;
    {
        const bool branch_taken_0x28cacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CACCu;
        // 0x28cad0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cacc) {
            ctx->pc = 0x28CADCu;
            goto label_28cadc;
        }
    }
    ctx->pc = 0x28CAD4u;
    // 0x28cad4: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x28CAD4u;
    SET_GPR_U32(ctx, 31, 0x28CADCu);
    ctx->pc = 0x28CAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CAD4u;
    // 0x28cad8: 0x8e240130  lw          $a0, 0x130($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x28CAD4u, 0x28CADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CADCu;
label_28cadc:
    // 0x28cadc: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x28cadcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_28cae0:
    // 0x28cae0: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x28CAE0u;
    {
        const bool branch_taken_0x28cae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CAE0u;
        // 0x28cae4: 0x132880  sll         $a1, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cae0) {
            ctx->pc = 0x28CA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ca48;
        }
    }
    ctx->pc = 0x28CAE8u;
    // 0x28cae8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28cae8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28caec: 0x2414efff  addiu       $s4, $zero, -0x1001
    ctx->pc = 0x28caecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28caf0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x28caf0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28caf4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x28caf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_28caf8:
    // 0x28caf8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x28caf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x28cafc: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x28cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x28cb00: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x28cb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x28cb04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28cb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cb08: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x28cb08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cb0c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28cb10: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x28cb10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cb14: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x28cb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x28cb18: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x28cb1c: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x28cb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x28cb20: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28cb24: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x28cb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x28cb28: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x28cb28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x28cb2c: 0x8cc40060  lw          $a0, 0x60($a2)
    ctx->pc = 0x28cb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x28cb30: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28cb34: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x28cb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x28cb38: 0x12a0000b  beqz        $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x28CB38u;
    {
        const bool branch_taken_0x28cb38 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB38u;
        // 0x28cb3c: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cb38) {
            ctx->pc = 0x28CB68u;
            goto label_28cb68;
        }
    }
    ctx->pc = 0x28CB40u;
    // 0x28cb40: 0x8e51003c  lw          $s1, 0x3C($s2)
    ctx->pc = 0x28cb40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x28cb44: 0x8cf00070  lw          $s0, 0x70($a3)
    ctx->pc = 0x28cb44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 112)));
    // 0x28cb48: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x28CB48u;
    SET_GPR_U32(ctx, 31, 0x28CB50u);
    ctx->pc = 0x28CB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CB48u;
    // 0x28cb4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x28CB48u, 0x28CB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CB50u;
label_28cb50:
    // 0x28cb50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28cb50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cb54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28cb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cb58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28CB58u;
    {
        const bool branch_taken_0x28cb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB58u;
        // 0x28cb5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cb58) {
            ctx->pc = 0x28CB68u;
            goto label_28cb68;
        }
    }
    ctx->pc = 0x28CB60u;
    // 0x28cb60: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x28CB60u;
    SET_GPR_U32(ctx, 31, 0x28CB68u);
    ctx->pc = 0x28CB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CB60u;
    // 0x28cb64: 0x8e240130  lw          $a0, 0x130($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x28CB60u, 0x28CB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CB68u;
label_28cb68:
    // 0x28cb68: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x28cb68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x28cb6c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x28CB6Cu;
    {
        const bool branch_taken_0x28cb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB6Cu;
        // 0x28cb70: 0x131880  sll         $v1, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cb6c) {
            ctx->pc = 0x28CAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28caf8;
        }
    }
    ctx->pc = 0x28CB74u;
    // 0x28cb74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28cb74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cb78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28cb78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28cb7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28cb7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28cb80: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x28cb80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28cb84: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x28cb84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28cb88: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x28cb88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28cb8c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x28cb8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28cb90: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x28cb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28cb94: 0x3e00008  jr          $ra
    ctx->pc = 0x28CB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB94u;
        // 0x28cb98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CB9Cu;
    // 0x28cb9c: 0x0  nop
    ctx->pc = 0x28cb9cu;
    // NOP
    ctx->pc = 0x28cba0u;
}
