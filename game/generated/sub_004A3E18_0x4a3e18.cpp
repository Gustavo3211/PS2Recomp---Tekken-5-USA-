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

// Function: sub_004A3E18
// Address: 0x4a3e18 - 0x4a4118
void sub_004A3E18_0x4a3e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A3E18_0x4a3e18");
#endif

    switch (ctx->pc) {
        case 0x4a3eb4u: goto label_4a3eb4;
        case 0x4a3ec0u: goto label_4a3ec0;
        case 0x4a3efcu: goto label_4a3efc;
        case 0x4a3f78u: goto label_4a3f78;
        default: break;
    }

    ctx->pc = 0x4a3e18u;

    // 0x4a3e18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a3e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4a3e1c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4a3e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4a3e20: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4a3e20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3e24: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4a3e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4a3e28: 0x26b60164  addiu       $s6, $s5, 0x164
    ctx->pc = 0x4a3e28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 356));
    // 0x4a3e2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a3e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a3e30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a3e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4a3e34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4a3e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4a3e38: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4a3e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4a3e3c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4a3e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4a3e40: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4a3e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4a3e44: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4a3e44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4a3e48: 0x544000a8  bnel        $v0, $zero, . + 4 + (0xA8 << 2)
    ctx->pc = 0x4A3E48u;
    {
        const bool branch_taken_0x4a3e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3e48) {
            ctx->pc = 0x4A3E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3E48u;
            // 0x4a3e4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A40ECu;
            goto label_4a40ec;
        }
    }
    ctx->pc = 0x4A3E50u;
    // 0x4a3e50: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4a3e50u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4a3e54: 0x86a2011c  lh          $v0, 0x11C($s5)
    ctx->pc = 0x4a3e54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 284)));
    // 0x4a3e58: 0x26100c08  addiu       $s0, $s0, 0xC08
    ctx->pc = 0x4a3e58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3080));
    // 0x4a3e5c: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4a3e5cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4a3e60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a3e60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0C08u));
    // 0x4a3e64: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a3e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a3e68: 0x26a50118  addiu       $a1, $s5, 0x118
    ctx->pc = 0x4a3e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 280));
    // 0x4a3e6c: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4a3e6cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4a3e70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a3e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a3e74: 0x26520c0c  addiu       $s2, $s2, 0xC0C
    ctx->pc = 0x4a3e74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3084));
    // 0x4a3e78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a3e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a3e7c: 0x26b30124  addiu       $s3, $s5, 0x124
    ctx->pc = 0x4a3e7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 292));
    // 0x4a3e80: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a3e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a3e84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a3e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a3e88: 0x26b40128  addiu       $s4, $s5, 0x128
    ctx->pc = 0x4a3e88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 296));
    // 0x4a3e8c: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x4a3e8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a3e90: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a3e90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3e94: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a3e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a3e98: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a3e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a3e9c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a3e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a3ea0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a3ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a3ea4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a3ea4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3ea8: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4a3ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a3eac: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4A3EACu;
    SET_GPR_U32(ctx, 31, 0x4A3EB4u);
    ctx->pc = 0x4A3EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3EACu;
    // 0x4a3eb0: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4A3EACu, 0x4A3EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3EB4u;
label_4a3eb4:
    // 0x4a3eb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a3eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3eb8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4A3EB8u;
    SET_GPR_U32(ctx, 31, 0x4A3EC0u);
    ctx->pc = 0x4A3EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3EB8u;
    // 0x4a3ebc: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4A3EB8u, 0x4A3EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3EC0u;
label_4a3ec0:
    // 0x4a3ec0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a3ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3ec4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4a3ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a3ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a3ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3ecc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a3eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a3ed0: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x4a3ed0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a3ed4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4a3ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4a3ed8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a3ed8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a3edc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a3edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a3ee0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a3ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a3ee4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a3ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a3ee8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a3ee8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3eec: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x4a3eecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a3ef0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a3ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a3ef4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4A3EF4u;
    SET_GPR_U32(ctx, 31, 0x4A3EFCu);
    ctx->pc = 0x4A3EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3EF4u;
    // 0x4a3ef8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4A3EF4u, 0x4A3EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3EFCu;
label_4a3efc:
    // 0x4a3efc: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4a3efcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3f00: 0x86a50130  lh          $a1, 0x130($s5)
    ctx->pc = 0x4a3f00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 304)));
    // 0x4a3f04: 0x26a60010  addiu       $a2, $s5, 0x10
    ctx->pc = 0x4a3f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x4a3f08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a3f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3f0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a3f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3f10: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4a3f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4a3f14: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4a3f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4a3f18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a3f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a3f1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a3f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a3f20: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4a3f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4a3f24: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4a3f24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3f28: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4a3f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a3f2c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4a3f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4a3f30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a3f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a3f34: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4a3f34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x4a3f38: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4a3f38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4a3f3c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4a3f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4a3f40: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4a3f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4a3f44: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a3f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3f48: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4a3f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4a3f4c: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x4a3f4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a3f50: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a3f50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a3f54: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a3f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a3f58: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a3f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a3f5c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a3f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a3f60: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a3f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a3f64: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a3f64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3f68: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x4a3f68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a3f6c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a3f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a3f70: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4A3F70u;
    SET_GPR_U32(ctx, 31, 0x4A3F78u);
    ctx->pc = 0x4A3F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3F70u;
    // 0x4a3f74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4A3F70u, 0x4A3F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3F78u;
label_4a3f78:
    // 0x4a3f78: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a3f78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3f7c: 0x86a40132  lh          $a0, 0x132($s5)
    ctx->pc = 0x4a3f7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 306)));
    // 0x4a3f80: 0x26a60014  addiu       $a2, $s5, 0x14
    ctx->pc = 0x4a3f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x4a3f84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a3f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3f88: 0x26a7012c  addiu       $a3, $s5, 0x12C
    ctx->pc = 0x4a3f88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 300));
    // 0x4a3f8c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a3f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a3f90: 0x26a80018  addiu       $t0, $s5, 0x18
    ctx->pc = 0x4a3f90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x4a3f94: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a3f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a3f98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a3f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a3f9c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a3f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a3fa0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a3fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a3fa4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a3fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a3fa8: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x4a3fa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x4a3fac: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a3facu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3fb0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4a3fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a3fb4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a3fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a3fb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a3fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a3fbc: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4a3fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4a3fc0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a3fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a3fc4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4a3fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4a3fc8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4a3fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3fcc: 0x86a20134  lh          $v0, 0x134($s5)
    ctx->pc = 0x4a3fccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 308)));
    // 0x4a3fd0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a3fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a3fd4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a3fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a3fd8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a3fd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a3fdc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4a3fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4a3fe0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a3fe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a3fe4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4a3fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a3fe8: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4a3fe8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3fec: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4a3fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4a3ff0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a3ff0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a3ff4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a3ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a3ff8: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4a3ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4a3ffc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4a3ffcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a4000: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4a4000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4a4004: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a4004u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a4008: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4a4008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a400c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a400cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a4010: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a4010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a4014: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4a4014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4a4018: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a4018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a401c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4a401cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4a4020: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a4020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a4024: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a4024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a4028: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4a4028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4a402c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4a402cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4a4030: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4a4030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a4034: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4a4034u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a4038: 0x711024  and         $v0, $v1, $s1
    ctx->pc = 0x4a4038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4a403c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4a403cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4a4040: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a4040u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a4044: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a4044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a4048: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a4048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a404c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a404cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a4050: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a4050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a4054: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4a4054u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4a4058: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4a4058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4a405c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4a405cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a4060: 0x911024  and         $v0, $a0, $s1
    ctx->pc = 0x4a4060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    // 0x4a4064: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4a4064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4a4068: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a4068u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a406c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a406cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a4070: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a4070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a4074: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a4074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a4078: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a4078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a407c: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4a407cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4a4080: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4a4080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a4084: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4a4084u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a4088: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4a4088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4a408c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a408cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a4090: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a4090u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a4094: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4a4094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a4098: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a4098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a409c: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4a409cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4a40a0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4a40a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4a40a4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a40a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a40a8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a40a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a40ac: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4a40acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a40b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a40b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a40b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a40b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a40b8: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4a40b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4a40bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a40bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a40c0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4a40c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4a40c4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a40c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a40c8: 0x28420401  slti        $v0, $v0, 0x401
    ctx->pc = 0x4a40c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x4a40cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A40CCu;
    {
        const bool branch_taken_0x4a40cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A40D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A40CCu;
        // 0x4a40d0: 0x96c20000  lhu         $v0, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a40cc) {
            ctx->pc = 0x4A40E0u;
            goto label_4a40e0;
        }
    }
    ctx->pc = 0x4A40D4u;
    // 0x4a40d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4A40D4u;
    {
        const bool branch_taken_0x4a40d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A40D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A40D4u;
        // 0x4a40d8: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a40d4) {
            ctx->pc = 0x4A40E4u;
            goto label_4a40e4;
        }
    }
    ctx->pc = 0x4A40DCu;
    // 0x4a40dc: 0x0  nop
    ctx->pc = 0x4a40dcu;
    // NOP
label_4a40e0:
    // 0x4a40e0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x4a40e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_4a40e4:
    // 0x4a40e4: 0xa6c20000  sh          $v0, 0x0($s6)
    ctx->pc = 0x4a40e4u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a40e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a40e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a40ec:
    // 0x4a40ec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4a40ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a40f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a40f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a40f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a40f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a40f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4a40f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a40fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4a40fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a4100: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4a4100u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a4104: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4a4104u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a4108: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4a4108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4a410c: 0x8128b10  j           func_4A2C40
    ctx->pc = 0x4A410Cu;
    ctx->pc = 0x4A4110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A410Cu;
    // 0x4a4110: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2C40u;
    sub_004A2C40_0x4a2c40(rdram, ctx, runtime); return;
    ctx->pc = 0x4A4114u;
    // 0x4a4114: 0x0  nop
    ctx->pc = 0x4a4114u;
    // NOP
    ctx->pc = 0x4a4118u;
}
