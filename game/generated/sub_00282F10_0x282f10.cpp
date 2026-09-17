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

// Function: sub_00282F10
// Address: 0x282f10 - 0x282ff0
void sub_00282F10_0x282f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282F10_0x282f10");
#endif

    switch (ctx->pc) {
        case 0x282f54u: goto label_282f54;
        default: break;
    }

    ctx->pc = 0x282f10u;

    // 0x282f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x282f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x282f14: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x282f14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282f18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x282f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x282f1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x282f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282f20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x282f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x282f24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x282f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282f28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x282f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x282f2c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x282f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x282f30: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x282f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x282f34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x282F34u;
    {
        const bool branch_taken_0x282f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282F34u;
        // 0x282f38: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f34) {
            ctx->pc = 0x282F44u;
            goto label_282f44;
        }
    }
    ctx->pc = 0x282F3Cu;
    // 0x282f3c: 0x920201bc  lbu         $v0, 0x1BC($s0)
    ctx->pc = 0x282f3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x282f40: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x282f40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_282f44:
    // 0x282f44: 0x50600024  beql        $v1, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x282F44u;
    {
        const bool branch_taken_0x282f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x282f44) {
            ctx->pc = 0x282F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282F44u;
            // 0x282f48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282FD8u;
            goto label_282fd8;
        }
    }
    ctx->pc = 0x282F4Cu;
    // 0x282f4c: 0xc09d940  jal         func_276500
    ctx->pc = 0x282F4Cu;
    SET_GPR_U32(ctx, 31, 0x282F54u);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x282F4Cu, 0x282F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282F54u;
label_282f54:
    // 0x282f54: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x282F54u;
    {
        const bool branch_taken_0x282f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282f54) {
            ctx->pc = 0x282F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282F54u;
            // 0x282f58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282FD8u;
            goto label_282fd8;
        }
    }
    ctx->pc = 0x282F5Cu;
    // 0x282f5c: 0x9202020f  lbu         $v0, 0x20F($s0)
    ctx->pc = 0x282f5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 527)));
    // 0x282f60: 0x92250184  lbu         $a1, 0x184($s1)
    ctx->pc = 0x282f60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x282f64: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x282F64u;
    {
        const bool branch_taken_0x282f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282F64u;
        // 0x282f68: 0x9607003c  lhu         $a3, 0x3C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f64) {
            ctx->pc = 0x282FD4u;
            goto label_282fd4;
        }
    }
    ctx->pc = 0x282F6Cu;
    // 0x282f6c: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x282f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x282f70: 0x8f83ca8c  lw          $v1, -0x3574($gp)
    ctx->pc = 0x282f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953612)));
    // 0x282f74: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x282f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x282f78: 0x92440045  lbu         $a0, 0x45($s2)
    ctx->pc = 0x282f78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
    // 0x282f7c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x282f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x282f80: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x282F80u;
    {
        const bool branch_taken_0x282f80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x282F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282F80u;
        // 0x282f84: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f80) {
            ctx->pc = 0x282FB0u;
            goto label_282fb0;
        }
    }
    ctx->pc = 0x282F88u;
    // 0x282f88: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x282f88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x282f8c: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x282f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x282f90: 0x2484007c  addiu       $a0, $a0, 0x7C
    ctx->pc = 0x282f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 124));
    // 0x282f94: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x282f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x282f98: 0x2c62ffff  sltiu       $v0, $v1, -0x1
    ctx->pc = 0x282f98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x282f9c: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x282f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x282fa0: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x282fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x282fa4: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x282fa4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x282fa8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x282FA8u;
    {
        const bool branch_taken_0x282fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282FA8u;
        // 0x282fac: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282fa8) {
            ctx->pc = 0x282FB4u;
            goto label_282fb4;
        }
    }
    ctx->pc = 0x282FB0u;
label_282fb0:
    // 0x282fb0: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x282fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_282fb4:
    // 0x282fb4: 0x24c400b0  addiu       $a0, $a2, 0xB0
    ctx->pc = 0x282fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
    // 0x282fb8: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x282fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x282fbc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x282fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x282fc0: 0x2c62ffff  sltiu       $v0, $v1, -0x1
    ctx->pc = 0x282fc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x282fc4: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x282fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x282fc8: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x282fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x282fcc: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x282fccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x282fd0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x282fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_282fd4:
    // 0x282fd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x282fd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_282fd8:
    // 0x282fd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x282fd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x282fdc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x282fdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282fe0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x282fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x282fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x282FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282FE4u;
        // 0x282fe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282FECu;
    // 0x282fec: 0x0  nop
    ctx->pc = 0x282fecu;
    // NOP
    ctx->pc = 0x282ff0u;
}
