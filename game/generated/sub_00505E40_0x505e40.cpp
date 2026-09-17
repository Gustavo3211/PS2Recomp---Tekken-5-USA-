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

// Function: sub_00505E40
// Address: 0x505e40 - 0x506040
void sub_00505E40_0x505e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00505E40_0x505e40");
#endif

    switch (ctx->pc) {
        case 0x505e44u: goto label_505e44;
        case 0x505e50u: goto label_505e50;
        case 0x505eb0u: goto label_505eb0;
        case 0x505eb4u: goto label_505eb4;
        case 0x505ebcu: goto label_505ebc;
        case 0x505fc8u: goto label_505fc8;
        case 0x505fd0u: goto label_505fd0;
        default: break;
    }

    ctx->pc = 0x505e40u;

    // 0x505e40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x505e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_505e44:
    // 0x505e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x505e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x505e48: 0x3e00008  jr          $ra
    ctx->pc = 0x505E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x505E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505E48u;
        // 0x505e4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x505E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x505E50u;
label_505e50:
    // 0x505e50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x505e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x505e54: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x505e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x505e58: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x505e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x505e5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x505e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x505e60: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x505e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x505e64: 0x2473c534  addiu       $s3, $v1, -0x3ACC
    ctx->pc = 0x505e64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952244));
    // 0x505e68: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x505e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x505e6c: 0x2452c530  addiu       $s2, $v0, -0x3AD0
    ctx->pc = 0x505e6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952240));
    // 0x505e70: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x505e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x505e74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x505e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x505e78: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x505e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x505e7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x505e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x505e80: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x505e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x505e84: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x505e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x505e88: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x505e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x505e8c: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x505e8cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x505e90: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x505e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x505e94: 0x2476c540  addiu       $s6, $v1, -0x3AC0
    ctx->pc = 0x505e94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952256));
    // 0x505e98: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x505e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x505e9c: 0x2457c548  addiu       $s7, $v0, -0x3AB8
    ctx->pc = 0x505e9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952264));
    // 0x505ea0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x505ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x505ea4: 0x249ec52c  addiu       $fp, $a0, -0x3AD4
    ctx->pc = 0x505ea4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952236));
    // 0x505ea8: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x505ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x505eac: 0x0  nop
    ctx->pc = 0x505eacu;
    // NOP
label_505eb0:
    // 0x505eb0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x505eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_505eb4:
    // 0x505eb4: 0xc14481c  jal         func_512070
    ctx->pc = 0x505EB4u;
    SET_GPR_U32(ctx, 31, 0x505EBCu);
    ctx->pc = 0x505EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x505EB4u;
    // 0x505eb8: 0x2444c528  addiu       $a0, $v0, -0x3AD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x505EB4u, 0x505EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505EBCu;
label_505ebc:
    // 0x505ebc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x505ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x505ec0: 0x14430026  bne         $v0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x505EC0u;
    {
        const bool branch_taken_0x505ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x505EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505EC0u;
        // 0x505ec4: 0x3c03008f  lui         $v1, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505ec0) {
            ctx->pc = 0x505F5Cu;
            goto label_505f5c;
        }
    }
    ctx->pc = 0x505EC8u;
    // 0x505ec8: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x505ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x505ecc: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x505eccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x505ed0: 0x8444c538  lh          $a0, -0x3AC8($v0)
    ctx->pc = 0x505ed0u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x8EC538u));
    // 0x505ed4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x505ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x505ed8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x505ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x505edc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x505edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x505ee0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x505ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x505ee4: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x505ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x505ee8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x505ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x505eec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x505eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x505ef0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x505ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x505ef4: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x505ef4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x505ef8: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x505ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x505efc: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x505efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x505f00: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x505f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x505f04: 0x9462c540  lhu         $v0, -0x3AC0($v1)
    ctx->pc = 0x505f04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8EC540u));
    // 0x505f08: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x505f08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x505f0c: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x505f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x505f10: 0x9443c544  lhu         $v1, -0x3ABC($v0)
    ctx->pc = 0x505f10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x8EC544u));
    // 0x505f14: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x505f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x505f18: 0xa4a30006  sh          $v1, 0x6($a1)
    ctx->pc = 0x505f18u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x505f1c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x505f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x505f20: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x505f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x505f24: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x505f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x505f28: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x505f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x505f2c: 0xa4620008  sh          $v0, 0x8($v1)
    ctx->pc = 0x505f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x505f30: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x505f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x505f34: 0x96e20000  lhu         $v0, 0x0($s7)
    ctx->pc = 0x505f34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x505f38: 0xa482000a  sh          $v0, 0xA($a0)
    ctx->pc = 0x505f38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x505f3c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x505f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x505f40: 0xa466000c  sh          $a2, 0xC($v1)
    ctx->pc = 0x505f40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x505f44: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x505f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x505f48: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x505f48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x505f4c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x505f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x505f50: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x505f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x505f54: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x505f54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x505f58: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x505f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
label_505f5c:
    // 0x505f5c: 0x86c40000  lh          $a0, 0x0($s6)
    ctx->pc = 0x505f5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x505f60: 0x8c62c548  lw          $v0, -0x3AB8($v1)
    ctx->pc = 0x505f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952264)));
    // 0x505f64: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x505f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x505f68: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x505f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x505f6c: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x505f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x505f70: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x505f70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x505f74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x505f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x505f78: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x505f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x505f7c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x505f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x505f80: 0x942025  or          $a0, $a0, $s4
    ctx->pc = 0x505f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 20));
    // 0x505f84: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x505f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x505f88: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x505f88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x505f8c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x505f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x505f90: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x505f90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x505f94: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x505f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x505f98: 0xafc60000  sw          $a2, 0x0($fp)
    ctx->pc = 0x505f98u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 6));
    // 0x505f9c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x505f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x505fa0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x505fa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x505fa4: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x505fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x505fa8: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x505fa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x505fac: 0x441ffc0  bgez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x505FACu;
    {
        const bool branch_taken_0x505fac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x505FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505FACu;
        // 0x505fb0: 0x3c02008f  lui         $v0, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505fac) {
            ctx->pc = 0x505EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_505eb0;
        }
    }
    ctx->pc = 0x505FB4u;
    // 0x505fb4: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x505fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x505fb8: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x505fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x505fbc: 0x2450c534  addiu       $s0, $v0, -0x3ACC
    ctx->pc = 0x505fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952244));
    // 0x505fc0: 0x2471c52c  addiu       $s1, $v1, -0x3AD4
    ctx->pc = 0x505fc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952236));
    // 0x505fc4: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x505fc4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
label_505fc8:
    // 0x505fc8: 0xc141756  jal         func_505D58
    ctx->pc = 0x505FC8u;
    SET_GPR_U32(ctx, 31, 0x505FD0u);
    ctx->pc = 0x505D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505D58u, 0x505FC8u, 0x505FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505FD0u;
label_505fd0:
    // 0x505fd0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x505FD0u;
    {
        const bool branch_taken_0x505fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x505fd0) {
            ctx->pc = 0x505FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x505FD0u;
            // 0x505fd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x506010u;
            goto label_506010;
        }
    }
    ctx->pc = 0x505FD8u;
    // 0x505fd8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x505fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x505fdc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x505fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x505fe0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x505fe0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x505fe4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x505fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x505fe8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x505fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x505fec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x505fecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x505ff0: 0x952025  or          $a0, $a0, $s5
    ctx->pc = 0x505ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 21));
    // 0x505ff4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x505ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x505ff8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x505ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x505ffc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x505ffcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x506000: 0x440fff1  bltz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x506000u;
    {
        const bool branch_taken_0x506000 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x506004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506000u;
        // 0x506004: 0x3c02008f  lui         $v0, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506000) {
            ctx->pc = 0x505FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_505fc8;
        }
    }
    ctx->pc = 0x506008u;
    // 0x506008: 0x1000ffaa  b           . + 4 + (-0x56 << 2)
    ctx->pc = 0x506008u;
    {
        const bool branch_taken_0x506008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506008u;
        // 0x50600c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506008) {
            ctx->pc = 0x505EB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_505eb4;
        }
    }
    ctx->pc = 0x506010u;
label_506010:
    // 0x506010: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x506010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x506014: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x506014u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x506018: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x506018u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50601c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x50601cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x506020: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x506020u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x506024: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x506024u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x506028: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x506028u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x50602c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x50602cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x506030: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x506030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x506034: 0x3e00008  jr          $ra
    ctx->pc = 0x506034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x506038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506034u;
        // 0x506038: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x506034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50603Cu;
    // 0x50603c: 0x0  nop
    ctx->pc = 0x50603cu;
    // NOP
    ctx->pc = 0x506040u;
}
