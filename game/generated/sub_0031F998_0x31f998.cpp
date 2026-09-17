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

// Function: sub_0031F998
// Address: 0x31f998 - 0x31fd60
void sub_0031F998_0x31f998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F998_0x31f998");
#endif

    switch (ctx->pc) {
        case 0x31f9f0u: goto label_31f9f0;
        case 0x31fa18u: goto label_31fa18;
        case 0x31fa40u: goto label_31fa40;
        case 0x31fa5cu: goto label_31fa5c;
        case 0x31fa8cu: goto label_31fa8c;
        case 0x31fce8u: goto label_31fce8;
        case 0x31fd30u: goto label_31fd30;
        default: break;
    }

    ctx->pc = 0x31f998u;

    // 0x31f998: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31f998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31f99c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x31f99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x31f9a0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x31f9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x31f9a4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x31f9a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f9a8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x31f9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x31f9ac: 0x3c1e0044  lui         $fp, 0x44
    ctx->pc = 0x31f9acu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)68 << 16));
    // 0x31f9b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31f9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x31f9b4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x31f9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x31f9b8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x31f9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x31f9bc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x31f9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x31f9c0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x31f9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x31f9c4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x31f9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x31f9c8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x31f9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x31f9cc: 0x8fc30440  lw          $v1, 0x440($fp)
    ctx->pc = 0x31f9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x440440u));
    // 0x31f9d0: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x31f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x31f9d4: 0x104300d6  beq         $v0, $v1, . + 4 + (0xD6 << 2)
    ctx->pc = 0x31F9D4u;
    {
        const bool branch_taken_0x31f9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x31F9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F9D4u;
        // 0x31f9d8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f9d4) {
            ctx->pc = 0x31FD30u;
            goto label_31fd30;
        }
    }
    ctx->pc = 0x31F9DCu;
    // 0x31f9dc: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x31f9dcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x31f9e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31f9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f9e4: 0x26c203c0  addiu       $v0, $s6, 0x3C0
    ctx->pc = 0x31f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 960));
    // 0x31f9e8: 0x2446000c  addiu       $a2, $v0, 0xC
    ctx->pc = 0x31f9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x31f9ec: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x31f9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31f9f0:
    // 0x31f9f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x31f9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31f9f4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x31f9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x31f9f8: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x31F9F8u;
    {
        const bool branch_taken_0x31f9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F9F8u;
        // 0x31f9fc: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f9f8) {
            ctx->pc = 0x31FB28u;
            goto label_31fb28;
        }
    }
    ctx->pc = 0x31FA00u;
    // 0x31fa00: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31fa00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31fa04: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x31fa04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x31fa08: 0x0  nop
    ctx->pc = 0x31fa08u;
    // NOP
    // 0x31fa0c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x31FA0Cu;
    {
        const bool branch_taken_0x31fa0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA0Cu;
        // 0x31fa10: 0x24660004  addiu       $a2, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fa0c) {
            ctx->pc = 0x31F9F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31f9f0;
        }
    }
    ctx->pc = 0x31FA14u;
    // 0x31fa14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31fa14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31fa18:
    // 0x31fa18: 0x26d403c0  addiu       $s4, $s6, 0x3C0
    ctx->pc = 0x31fa18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 960));
    // 0x31fa1c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x31fa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x31fa20: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x31fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x31fa24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31fa24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fa28: 0x8fb10000  lw          $s1, 0x0($sp)
    ctx->pc = 0x31fa28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31fa2c: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x31fa2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
    // 0x31fa30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31fa34: 0x2610d280  addiu       $s0, $s0, -0x2D80
    ctx->pc = 0x31fa34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955648));
    // 0x31fa38: 0xc0c77e8  jal         func_31DFA0
    ctx->pc = 0x31FA38u;
    SET_GPR_U32(ctx, 31, 0x31FA40u);
    ctx->pc = 0x31FA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FA38u;
    // 0x31fa3c: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DFA0u, 0x31FA38u, 0x31FA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FA40u;
label_31fa40:
    // 0x31fa40: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x31fa40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fa44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31fa44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fa48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31fa48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fa4c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x31fa4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fa50: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x31fa50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fa54: 0xc0c7b96  jal         func_31EE58
    ctx->pc = 0x31FA54u;
    SET_GPR_U32(ctx, 31, 0x31FA5Cu);
    ctx->pc = 0x31FA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FA54u;
    // 0x31fa58: 0x3c170040  lui         $s7, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EE58u, 0x31FA54u, 0x31FA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FA5Cu;
label_31fa5c:
    // 0x31fa5c: 0x8fb30000  lw          $s3, 0x0($sp)
    ctx->pc = 0x31fa5cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31fa60: 0x12620052  beq         $s3, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x31FA60u;
    {
        const bool branch_taken_0x31fa60 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x31FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA60u;
        // 0x31fa64: 0x539023  subu        $s2, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fa60) {
            ctx->pc = 0x31FBACu;
            goto label_31fbac;
        }
    }
    ctx->pc = 0x31FA68u;
    // 0x31fa68: 0x1240004f  beqz        $s2, . + 4 + (0x4F << 2)
    ctx->pc = 0x31FA68u;
    {
        const bool branch_taken_0x31fa68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA68u;
        // 0x31fa6c: 0x26f00400  addiu       $s0, $s7, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fa68) {
            ctx->pc = 0x31FBA8u;
            goto label_31fba8;
        }
    }
    ctx->pc = 0x31FA70u;
    // 0x31fa70: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x31fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x31fa74: 0x8e110014  lw          $s1, 0x14($s0)
    ctx->pc = 0x31fa74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x31fa78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31fa78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fa7c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x31fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x31fa80: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x31fa80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x31fa84: 0xc0ce218  jal         func_338860
    ctx->pc = 0x31FA84u;
    SET_GPR_U32(ctx, 31, 0x31FA8Cu);
    ctx->pc = 0x31FA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FA84u;
    // 0x31fa88: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x31FA84u, 0x31FA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FA8Cu;
label_31fa8c:
    // 0x31fa8c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31fa90: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x31fa90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x31fa94: 0x122902  srl         $a1, $s2, 4
    ctx->pc = 0x31fa94u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
    // 0x31fa98: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31fa9c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x31fa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x31faa0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31faa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31faa4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x31faa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x31faa8: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x31faa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53264);
    // 0x31faac: 0x2224824  and         $t1, $s1, $v0
    ctx->pc = 0x31faacu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x31fab0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x31fab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31fab4: 0x32653fff  andi        $a1, $s3, 0x3FFF
    ctx->pc = 0x31fab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16383);
    // 0x31fab8: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x31fab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x31fabc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x31fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x31fac0: 0x3442d080  ori         $v0, $v0, 0xD080
    ctx->pc = 0x31fac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53376);
    // 0x31fac4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31fac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31fac8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x31fac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31facc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x31faccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x31fad0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x31fad0u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 5)); // MMIO: 0x1000d080
    // 0x31fad4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x31fad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x31fad8: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x31fad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
    // 0x31fadc: 0x3484d000  ori         $a0, $a0, 0xD000
    ctx->pc = 0x31fadcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53248);
    // 0x31fae0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x31fae0u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x1000D080u)); // MMIO: 0x1000d080
    // 0x31fae4: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x31fae4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x31fae8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x31fae8u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x31faec: 0x3c083000  lui         $t0, 0x3000
    ctx->pc = 0x31faecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)12288 << 16));
    // 0x31faf0: 0x2263824  and         $a3, $s1, $a2
    ctx->pc = 0x31faf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & GPR_U64(ctx, 6));
    // 0x31faf4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x31faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31faf8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x31faf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x31fafc: 0x2322821  addu        $a1, $s1, $s2
    ctx->pc = 0x31fafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x31fb00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31fb04: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x31fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31fb08: 0xae930008  sw          $s3, 0x8($s4)
    ctx->pc = 0x31fb08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 19));
    // 0x31fb0c: 0x14e6000e  bne         $a3, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x31FB0Cu;
    {
        const bool branch_taken_0x31fb0c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x31FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB0Cu;
        // 0x31fb10: 0x482025  or          $a0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fb0c) {
            ctx->pc = 0x31FB48u;
            goto label_31fb48;
        }
    }
    ctx->pc = 0x31FB14u;
    // 0x31fb14: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31fb18: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31fb18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31fb1c: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x31fb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x31fb20: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x31FB20u;
    {
        const bool branch_taken_0x31fb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB20u;
        // 0x31fb24: 0x2103c  dsll32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fb20) {
            ctx->pc = 0x31FB50u;
            goto label_31fb50;
        }
    }
    ctx->pc = 0x31FB28u;
label_31fb28:
    // 0x31fb28: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x31fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31fb2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31fb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31fb30: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31fb34: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x31fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x31fb38: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x31fb38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x31fb3c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x31fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x31fb40: 0x1000ffb5  b           . + 4 + (-0x4B << 2)
    ctx->pc = 0x31FB40u;
    {
        const bool branch_taken_0x31fb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB40u;
        // 0x31fb44: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fb40) {
            ctx->pc = 0x31FA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31fa18;
        }
    }
    ctx->pc = 0x31FB48u;
label_31fb48:
    // 0x31fb48: 0x9183c  dsll32      $v1, $t1, 0
    ctx->pc = 0x31fb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 0));
    // 0x31fb4c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x31fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_31fb50:
    // 0x31fb50: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x31fb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31fb54: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x31fb54u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x31fb58: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31fb58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31fb5c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31fb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31fb60: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x31fb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31fb64: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FB64u;
    {
        const bool branch_taken_0x31fb64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31fb64) {
            ctx->pc = 0x31FB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FB64u;
            // 0x31fb68: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FB80u;
            goto label_31fb80;
        }
    }
    ctx->pc = 0x31FB6Cu;
    // 0x31fb6c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31fb70: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31fb70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31fb74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31FB74u;
    {
        const bool branch_taken_0x31fb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB74u;
        // 0x31fb78: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fb74) {
            ctx->pc = 0x31FB8Cu;
            goto label_31fb8c;
        }
    }
    ctx->pc = 0x31FB7Cu;
    // 0x31fb7c: 0x0  nop
    ctx->pc = 0x31fb7cu;
    // NOP
label_31fb80:
    // 0x31fb80: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31fb80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31fb84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31fb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31fb88: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x31fb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_31fb8c:
    // 0x31fb8c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31fb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31fb90: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x31fb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31fb94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31fb94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fb98: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x31fb98u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x31fb9c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x31fb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x31fba0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31FBA0u;
    {
        const bool branch_taken_0x31fba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FBA0u;
        // 0x31fba4: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fba0) {
            ctx->pc = 0x31FBACu;
            goto label_31fbac;
        }
    }
    ctx->pc = 0x31FBA8u;
label_31fba8:
    // 0x31fba8: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x31fba8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_31fbac:
    // 0x31fbac: 0x26e20400  addiu       $v0, $s7, 0x400
    ctx->pc = 0x31fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1024));
    // 0x31fbb0: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x31fbb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x31fbb4: 0x8c480014  lw          $t0, 0x14($v0)
    ctx->pc = 0x31fbb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x31fbb8: 0x2449002c  addiu       $t1, $v0, 0x2C
    ctx->pc = 0x31fbb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x31fbbc: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x31fbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x31fbc0: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x31fbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x31fbc4: 0x25030020  addiu       $v1, $t0, 0x20
    ctx->pc = 0x31fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x31fbc8: 0x1072824  and         $a1, $t0, $a3
    ctx->pc = 0x31fbc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x31fbcc: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x31fbccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x31fbd0: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x31fbd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x31fbd4: 0x14a70006  bne         $a1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FBD4u;
    {
        const bool branch_taken_0x31fbd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x31FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FBD4u;
        // 0x31fbd8: 0x250a0010  addiu       $t2, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fbd4) {
            ctx->pc = 0x31FBF0u;
            goto label_31fbf0;
        }
    }
    ctx->pc = 0x31FBDCu;
    // 0x31fbdc: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31fbe0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31fbe4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31FBE4u;
    {
        const bool branch_taken_0x31fbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FBE4u;
        // 0x31fbe8: 0x1021025  or          $v0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fbe4) {
            ctx->pc = 0x31FC00u;
            goto label_31fc00;
        }
    }
    ctx->pc = 0x31FBECu;
    // 0x31fbec: 0x0  nop
    ctx->pc = 0x31fbecu;
    // NOP
label_31fbf0:
    // 0x31fbf0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31fbf4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31fbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31fbf8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31fbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31fbfc: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x31fbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_31fc00:
    // 0x31fc00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31fc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31fc04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31fc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31fc08: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x31fc08u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x31fc0c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31fc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31fc10: 0x8d240004  lw          $a0, 0x4($t1)
    ctx->pc = 0x31fc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x31fc14: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x31fc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31fc18: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31FC18u;
    {
        const bool branch_taken_0x31fc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31fc18) {
            ctx->pc = 0x31FC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FC18u;
            // 0x31fc1c: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FC30u;
            goto label_31fc30;
        }
    }
    ctx->pc = 0x31FC20u;
    // 0x31fc20: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31fc24: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31fc24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31fc28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31FC28u;
    {
        const bool branch_taken_0x31fc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FC28u;
        // 0x31fc2c: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fc28) {
            ctx->pc = 0x31FC3Cu;
            goto label_31fc3c;
        }
    }
    ctx->pc = 0x31FC30u;
label_31fc30:
    // 0x31fc30: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31fc34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31fc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31fc38: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x31fc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_31fc3c:
    // 0x31fc3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31fc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31fc40: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x31fc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31fc44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31fc44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fc48: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x31fc48u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x31fc4c: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x31fc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x31fc50: 0x25060010  addiu       $a2, $t0, 0x10
    ctx->pc = 0x31fc50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x31fc54: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x31fc54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x31fc58: 0x26a30010  addiu       $v1, $s5, 0x10
    ctx->pc = 0x31fc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x31fc5c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x31fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x31fc60: 0xc52024  and         $a0, $a2, $a1
    ctx->pc = 0x31fc60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x31fc64: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x31fc64u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x31fc68: 0x1023825  or          $a3, $t0, $v0
    ctx->pc = 0x31fc68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x31fc6c: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x31fc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x31fc70: 0x14850005  bne         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31FC70u;
    {
        const bool branch_taken_0x31fc70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x31FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FC70u;
        // 0x31fc74: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fc70) {
            ctx->pc = 0x31FC88u;
            goto label_31fc88;
        }
    }
    ctx->pc = 0x31FC78u;
    // 0x31fc78: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31fc7c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31fc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31fc80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31FC80u;
    {
        const bool branch_taken_0x31fc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FC80u;
        // 0x31fc84: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fc80) {
            ctx->pc = 0x31FC98u;
            goto label_31fc98;
        }
    }
    ctx->pc = 0x31FC88u;
label_31fc88:
    // 0x31fc88: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31fc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31fc8c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31fc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31fc90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31fc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31fc94: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x31fc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_31fc98:
    // 0x31fc98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31fc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31fc9c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x31fc9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31fca0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31fca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fca4: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x31fca4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x31fca8: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x31fca8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x31fcac: 0x8fc30440  lw          $v1, 0x440($fp)
    ctx->pc = 0x31fcacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1088)));
    // 0x31fcb0: 0x26c503c0  addiu       $a1, $s6, 0x3C0
    ctx->pc = 0x31fcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 960));
    // 0x31fcb4: 0xaea00018  sw          $zero, 0x18($s5)
    ctx->pc = 0x31fcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 0));
    // 0x31fcb8: 0xaea3000c  sw          $v1, 0xC($s5)
    ctx->pc = 0x31fcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 3));
    // 0x31fcbc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x31fcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31fcc0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x31fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x31fcc4: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31FCC4u;
    {
        const bool branch_taken_0x31fcc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x31fcc4) {
            ctx->pc = 0x31FCC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FCC4u;
            // 0x31fcc8: 0x24a7000c  addiu       $a3, $a1, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FCD8u;
            goto label_31fcd8;
        }
    }
    ctx->pc = 0x31FCCCu;
    // 0x31fccc: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x31fcccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x31fcd0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31FCD0u;
    {
        const bool branch_taken_0x31fcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FCD0u;
        // 0x31fcd4: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fcd0) {
            ctx->pc = 0x31FD14u;
            goto label_31fd14;
        }
    }
    ctx->pc = 0x31FCD8u;
label_31fcd8:
    // 0x31fcd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31fcd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fcdc: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x31fcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x31fce0: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x31fce0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fce4: 0x0  nop
    ctx->pc = 0x31fce4u;
    // NOP
label_31fce8:
    // 0x31fce8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x31fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31fcec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FCECu;
    {
        const bool branch_taken_0x31fcec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FCECu;
        // 0x31fcf0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fcec) {
            ctx->pc = 0x31FCFCu;
            goto label_31fcfc;
        }
    }
    ctx->pc = 0x31FCF4u;
    // 0x31fcf4: 0x50c40007  beql        $a2, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31FCF4u;
    {
        const bool branch_taken_0x31fcf4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x31fcf4) {
            ctx->pc = 0x31FCF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FCF4u;
            // 0x31fcf8: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FD14u;
            goto label_31fd14;
        }
    }
    ctx->pc = 0x31FCFCu;
label_31fcfc:
    // 0x31fcfc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31fcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31fd00: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x31fd00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x31fd04: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x31fd04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x31fd08: 0x0  nop
    ctx->pc = 0x31fd08u;
    // NOP
    // 0x31fd0c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x31FD0Cu;
    {
        const bool branch_taken_0x31fd0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FD0Cu;
        // 0x31fd10: 0x24c60c00  addiu       $a2, $a2, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fd0c) {
            ctx->pc = 0x31FCE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31fce8;
        }
    }
    ctx->pc = 0x31FD14u;
label_31fd14:
    // 0x31fd14: 0x26c403c0  addiu       $a0, $s6, 0x3C0
    ctx->pc = 0x31fd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 960));
    // 0x31fd18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x31fd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31fd1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31fd20: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FD20u;
    {
        const bool branch_taken_0x31fd20 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x31FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FD20u;
        // 0x31fd24: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fd20) {
            ctx->pc = 0x31FD30u;
            goto label_31fd30;
        }
    }
    ctx->pc = 0x31FD28u;
    // 0x31fd28: 0xc0ce218  jal         func_338860
    ctx->pc = 0x31FD28u;
    SET_GPR_U32(ctx, 31, 0x31FD30u);
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x31FD28u, 0x31FD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FD30u;
label_31fd30:
    // 0x31fd30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31fd30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31fd34: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x31fd34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31fd38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x31fd38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31fd3c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x31fd3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31fd40: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x31fd40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31fd44: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x31fd44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31fd48: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x31fd48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31fd4c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x31fd4cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fd50: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x31fd50u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31fd54: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x31fd54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31fd58: 0x3e00008  jr          $ra
    ctx->pc = 0x31FD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FD58u;
        // 0x31fd5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FD58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FD60u;
}
