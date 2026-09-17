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

// Function: sub_00321A70
// Address: 0x321a70 - 0x321b18
void sub_00321A70_0x321a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321A70_0x321a70");
#endif

    switch (ctx->pc) {
        case 0x321aacu: goto label_321aac;
        case 0x321ac8u: goto label_321ac8;
        case 0x321ae4u: goto label_321ae4;
        default: break;
    }

    ctx->pc = 0x321a70u;

    // 0x321a70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x321a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x321a74: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x321a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x321a78: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x321a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a7c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x321a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x321a80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x321a80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a84: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x321a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x321a88: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x321a88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a8c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x321a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x321a90: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x321a90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x321a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a98: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x321a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x321a9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x321a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321aa0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x321aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x321aa4: 0xc0c76ce  jal         func_31DB38
    ctx->pc = 0x321AA4u;
    SET_GPR_U32(ctx, 31, 0x321AACu);
    ctx->pc = 0x321AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321AA4u;
    // 0x321aa8: 0x27a70008  addiu       $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DB38u, 0x321AA4u, 0x321AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321AACu;
label_321aac:
    // 0x321aac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x321AACu;
    {
        const bool branch_taken_0x321aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321AACu;
        // 0x321ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321aac) {
            ctx->pc = 0x321AC0u;
            goto label_321ac0;
        }
    }
    ctx->pc = 0x321AB4u;
    // 0x321ab4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x321ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x321ab8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x321AB8u;
    {
        const bool branch_taken_0x321ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321AB8u;
        // 0x321abc: 0x34424005  ori         $v0, $v0, 0x4005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16389);
        ctx->in_delay_slot = false;
        if (branch_taken_0x321ab8) {
            ctx->pc = 0x321AF8u;
            goto label_321af8;
        }
    }
    ctx->pc = 0x321AC0u;
label_321ac0:
    // 0x321ac0: 0xc0c7764  jal         func_31DD90
    ctx->pc = 0x321AC0u;
    SET_GPR_U32(ctx, 31, 0x321AC8u);
    ctx->pc = 0x31DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DD90u, 0x321AC0u, 0x321AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321AC8u;
label_321ac8:
    // 0x321ac8: 0x262409c0  addiu       $a0, $s1, 0x9C0
    ctx->pc = 0x321ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2496));
    // 0x321acc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x321accu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321ad0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x321ad0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321ad4: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x321ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x321ad8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x321ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321adc: 0xc0cf066  jal         func_33C198
    ctx->pc = 0x321ADCu;
    SET_GPR_U32(ctx, 31, 0x321AE4u);
    ctx->pc = 0x321AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321ADCu;
    // 0x321ae0: 0x8fa80008  lw          $t0, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C198u, 0x321ADCu, 0x321AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321AE4u;
label_321ae4:
    // 0x321ae4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x321ae4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321ae8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x321ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x321aec: 0x34424005  ori         $v0, $v0, 0x4005
    ctx->pc = 0x321aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16389);
    // 0x321af0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x321af0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x321af4: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x321af4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_321af8:
    // 0x321af8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x321af8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321afc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x321afcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x321b00: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x321b00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321b04: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x321b04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x321b08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x321b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x321b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x321B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B0Cu;
        // 0x321b10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321B14u;
    // 0x321b14: 0x0  nop
    ctx->pc = 0x321b14u;
    // NOP
    ctx->pc = 0x321b18u;
}
