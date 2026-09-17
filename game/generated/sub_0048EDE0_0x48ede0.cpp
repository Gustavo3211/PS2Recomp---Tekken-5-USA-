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

// Function: sub_0048EDE0
// Address: 0x48ede0 - 0x48ef20
void sub_0048EDE0_0x48ede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048EDE0_0x48ede0");
#endif

    switch (ctx->pc) {
        case 0x48ee70u: goto label_48ee70;
        case 0x48eec8u: goto label_48eec8;
        case 0x48eef4u: goto label_48eef4;
        default: break;
    }

    ctx->pc = 0x48ede0u;

    // 0x48ede0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x48ede0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x48ede4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x48ede4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x48ede8: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x48ede8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x48edec: 0x41c03  sra         $v1, $a0, 16
    ctx->pc = 0x48edecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 16));
    // 0x48edf0: 0x53c03  sra         $a3, $a1, 16
    ctx->pc = 0x48edf0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 16));
    // 0x48edf4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48edf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48edf8: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x48edf8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x48edfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48ee00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48ee00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48ee04: 0x28680002  slti        $t0, $v1, 0x2
    ctx->pc = 0x48ee04u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x48ee08: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x48ee08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ee0c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x48EE0Cu;
    {
        const bool branch_taken_0x48ee0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE0Cu;
        // 0x48ee10: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ee0c) {
            ctx->pc = 0x48EE48u;
            goto label_48ee48;
        }
    }
    ctx->pc = 0x48EE14u;
    // 0x48ee14: 0x51000006  beql        $t0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x48EE14u;
    {
        const bool branch_taken_0x48ee14 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ee14) {
            ctx->pc = 0x48EE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48EE14u;
            // 0x48ee18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48EE30u;
            goto label_48ee30;
        }
    }
    ctx->pc = 0x48EE1Cu;
    // 0x48ee1c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x48EE1Cu;
    {
        const bool branch_taken_0x48ee1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE1Cu;
        // 0x48ee20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ee1c) {
            ctx->pc = 0x48EE40u;
            goto label_48ee40;
        }
    }
    ctx->pc = 0x48EE24u;
    // 0x48ee24: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x48EE24u;
    {
        const bool branch_taken_0x48ee24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ee24) {
            ctx->pc = 0x48EE68u;
            goto label_48ee68;
        }
    }
    ctx->pc = 0x48EE2Cu;
    // 0x48ee2c: 0x0  nop
    ctx->pc = 0x48ee2cu;
    // NOP
label_48ee30:
    // 0x48ee30: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x48EE30u;
    {
        const bool branch_taken_0x48ee30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE30u;
        // 0x48ee34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ee30) {
            ctx->pc = 0x48EE58u;
            goto label_48ee58;
        }
    }
    ctx->pc = 0x48EE38u;
    // 0x48ee38: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x48EE38u;
    {
        const bool branch_taken_0x48ee38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ee38) {
            ctx->pc = 0x48EE68u;
            goto label_48ee68;
        }
    }
    ctx->pc = 0x48EE40u;
label_48ee40:
    // 0x48ee40: 0x8123bc8  j           func_48EF20
    ctx->pc = 0x48EE40u;
    ctx->pc = 0x48EE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48EE40u;
    // 0x48ee44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF20u;
    sub_0048EF20_0x48ef20(rdram, ctx, runtime); return;
    ctx->pc = 0x48EE48u;
label_48ee48:
    // 0x48ee48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48ee48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ee4c: 0x8123bd2  j           func_48EF48
    ctx->pc = 0x48EE4Cu;
    ctx->pc = 0x48EE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48EE4Cu;
    // 0x48ee50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF48u;
    sub_0048EF48_0x48ef48(rdram, ctx, runtime); return;
    ctx->pc = 0x48EE54u;
    // 0x48ee54: 0x0  nop
    ctx->pc = 0x48ee54u;
    // NOP
label_48ee58:
    // 0x48ee58: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x48ee58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ee5c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x48ee5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ee60: 0x8123bdc  j           func_48EF70
    ctx->pc = 0x48EE60u;
    ctx->pc = 0x48EE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48EE60u;
    // 0x48ee64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF70u;
    sub_0048EF70_0x48ef70(rdram, ctx, runtime); return;
    ctx->pc = 0x48EE68u;
label_48ee68:
    // 0x48ee68: 0x3e00008  jr          $ra
    ctx->pc = 0x48EE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE68u;
        // 0x48ee6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48EE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48EE70u;
label_48ee70:
    // 0x48ee70: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48ee74: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48ee74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48ee78: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x48ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x48ee7c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x48ee7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x48ee80: 0x8447f890  lh          $a3, -0x770($v0)
    ctx->pc = 0x48ee80u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294965392)));
    // 0x48ee84: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x48ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x48ee88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x48ee88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x48ee8c: 0x38c03  sra         $s1, $v1, 16
    ctx->pc = 0x48ee8cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 16));
    // 0x48ee90: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x48ee90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x48ee94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48ee94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48ee98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x48ee98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ee9c: 0x32311fff  andi        $s1, $s1, 0x1FFF
    ctx->pc = 0x48ee9cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8191);
    // 0x48eea0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48eea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x48eea4: 0x68403  sra         $s0, $a2, 16
    ctx->pc = 0x48eea4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 6), 16));
    // 0x48eea8: 0x10e00018  beqz        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x48EEA8u;
    {
        const bool branch_taken_0x48eea8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EEA8u;
        // 0x48eeac: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48eea8) {
            ctx->pc = 0x48EF0Cu;
            goto label_48ef0c;
        }
    }
    ctx->pc = 0x48EEB0u;
    // 0x48eeb0: 0x21480  sll         $v0, $v0, 18
    ctx->pc = 0x48eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x48eeb4: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x48eeb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x48eeb8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x48eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x48eebc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x48eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48eec0: 0xc13e3fc  jal         func_4F8FF0
    ctx->pc = 0x48EEC0u;
    SET_GPR_U32(ctx, 31, 0x48EEC8u);
    ctx->pc = 0x48EEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48EEC0u;
    // 0x48eec4: 0x28403  sra         $s0, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8FF0u, 0x48EEC0u, 0x48EEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EEC8u;
label_48eec8:
    // 0x48eec8: 0x3c03007e  lui         $v1, 0x7E
    ctx->pc = 0x48eec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)126 << 16));
    // 0x48eecc: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x48eeccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x48eed0: 0x2463f650  addiu       $v1, $v1, -0x9B0
    ctx->pc = 0x48eed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964816));
    // 0x48eed4: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x48eed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x48eed8: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x48eed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x48eedc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x48eedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48eee0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x48eee0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48eee4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x48EEE4u;
    {
        const bool branch_taken_0x48eee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EEE4u;
        // 0x48eee8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48eee4) {
            ctx->pc = 0x48EF00u;
            goto label_48ef00;
        }
    }
    ctx->pc = 0x48EEECu;
    // 0x48eeec: 0xc123af2  jal         func_48EBC8
    ctx->pc = 0x48EEECu;
    SET_GPR_U32(ctx, 31, 0x48EEF4u);
    ctx->pc = 0x48EBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EBC8u, 0x48EEECu, 0x48EEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EEF4u;
label_48eef4:
    // 0x48eef4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x48EEF4u;
    {
        const bool branch_taken_0x48eef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EEF4u;
        // 0x48eef8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48eef4) {
            ctx->pc = 0x48EF10u;
            goto label_48ef10;
        }
    }
    ctx->pc = 0x48EEFCu;
    // 0x48eefc: 0x0  nop
    ctx->pc = 0x48eefcu;
    // NOP
label_48ef00:
    // 0x48ef00: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x48ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x48ef04: 0xa4710000  sh          $s1, 0x0($v1)
    ctx->pc = 0x48ef04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x48ef08: 0xa4c20002  sh          $v0, 0x2($a2)
    ctx->pc = 0x48ef08u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 2));
label_48ef0c:
    // 0x48ef0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48ef0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48ef10:
    // 0x48ef10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48ef10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48ef14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48ef14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48ef18: 0x3e00008  jr          $ra
    ctx->pc = 0x48EF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EF18u;
        // 0x48ef1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48EF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48EF20u;
}
