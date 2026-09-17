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

// Function: sub_0033EBE0
// Address: 0x33ebe0 - 0x33eca0
void sub_0033EBE0_0x33ebe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EBE0_0x33ebe0");
#endif

    switch (ctx->pc) {
        case 0x33ec3cu: goto label_33ec3c;
        default: break;
    }

    ctx->pc = 0x33ebe0u;

    // 0x33ebe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33ebe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33ebe4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x33ebe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x33ebe8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33ebe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ebec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x33ebecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x33ebf0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x33ebf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ebf4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x33ebf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x33ebf8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x33ebf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ebfc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x33ebfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x33ec00: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x33ec00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ec04: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x33ec04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x33ec08: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x33ec08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
    // 0x33ec0c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x33ec0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x33ec10: 0x8e104000  lw          $s0, 0x4000($s0)
    ctx->pc = 0x33ec10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16384)));
    // 0x33ec14: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x33ec14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33ec18: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x33ec18u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x33ec1c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x33ec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x33ec20: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x33ec20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x33ec24: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x33ec24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x33ec28: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x33ec28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x33ec2c: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x33ec2cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x33ec30: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x33ec30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x33ec34: 0xc0c77e8  jal         func_31DFA0
    ctx->pc = 0x33EC34u;
    SET_GPR_U32(ctx, 31, 0x33EC3Cu);
    ctx->pc = 0x33EC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EC34u;
    // 0x33ec38: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DFA0u, 0x33EC34u, 0x33EC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EC3Cu;
label_33ec3c:
    // 0x33ec3c: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x33ec3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x33ec40: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x33ec40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x33ec44: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x33ec44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x33ec48: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x33ec48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x33ec4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33ec4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ec50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x33ec50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33ec54: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x33ec54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ec58: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x33ec58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
    // 0x33ec5c: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x33ec5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x33ec60: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x33ec60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x33ec64: 0xa2000019  sb          $zero, 0x19($s0)
    ctx->pc = 0x33ec64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 0));
    // 0x33ec68: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x33ec68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33ec6c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x33ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x33ec70: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x33ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x33ec74: 0x8c634000  lw          $v1, 0x4000($v1)
    ctx->pc = 0x33ec74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16384)));
    // 0x33ec78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x33ec78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33ec7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33ec80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33ec80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33ec84: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x33ec84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x33ec88: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x33ec88u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x33ec8c: 0xac234000  sw          $v1, 0x4000($at)
    ctx->pc = 0x33ec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16384), GPR_U32(ctx, 3));
    // 0x33ec90: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x33ec90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ec94: 0x3e00008  jr          $ra
    ctx->pc = 0x33EC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EC94u;
        // 0x33ec98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EC9Cu;
    // 0x33ec9c: 0x0  nop
    ctx->pc = 0x33ec9cu;
    // NOP
    ctx->pc = 0x33eca0u;
}
