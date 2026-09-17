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

// Function: sub_004F3C18
// Address: 0x4f3c18 - 0x4f3d90
void sub_004F3C18_0x4f3c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F3C18_0x4f3c18");
#endif

    switch (ctx->pc) {
        case 0x4f3c4cu: goto label_4f3c4c;
        case 0x4f3cfcu: goto label_4f3cfc;
        case 0x4f3d04u: goto label_4f3d04;
        default: break;
    }

    ctx->pc = 0x4f3c18u;

    // 0x4f3c18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f3c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f3c1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f3c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f3c20: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4f3c20u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4f3c24: 0x2652125c  addiu       $s2, $s2, 0x125C
    ctx->pc = 0x4f3c24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4700));
    // 0x4f3c28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f3c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f3c2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f3c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f3c30: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4f3c30u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4f3c34: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f3c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f3c38: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4f3c38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f3c3c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4f3c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4f3c40: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4f3c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4f3c44: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4F3C44u;
    SET_GPR_U32(ctx, 31, 0x4F3C4Cu);
    ctx->pc = 0x4F3C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3C44u;
    // 0x4f3c48: 0x3c14ffff  lui         $s4, 0xFFFF (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4F3C44u, 0x4F3C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3C4Cu;
label_4f3c4c:
    // 0x4f3c4c: 0x240300ac  addiu       $v1, $zero, 0xAC
    ctx->pc = 0x4f3c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x4f3c50: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4f3c50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4f3c54: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4f3c54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f3c58: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4f3c58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4f3c5c: 0x24c61250  addiu       $a2, $a2, 0x1250
    ctx->pc = 0x4f3c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4688));
    // 0x4f3c60: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4f3c60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4f3c64: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4f3c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f3c68: 0x2610123c  addiu       $s0, $s0, 0x123C
    ctx->pc = 0x4f3c68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4668));
    // 0x4f3c6c: 0x26311240  addiu       $s1, $s1, 0x1240
    ctx->pc = 0x4f3c6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4672));
    // 0x4f3c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f3c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f3c74: 0xac730140  sw          $s3, 0x140($v1)
    ctx->pc = 0x4f3c74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 320), GPR_U32(ctx, 19));
    // 0x4f3c78: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4f3c78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1250u));
    // 0x4f3c7c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f3c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F123Cu));
    // 0x4f3c80: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x4f3c80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f3c84: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f3c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f3c88: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4f3c88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F1250u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1250u, _value); } while (0);
    // 0x4f3c8c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f3c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f3c90: 0xb42825  or          $a1, $a1, $s4
    ctx->pc = 0x4f3c90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 20));
    // 0x4f3c94: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4f3c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4f3c98: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4f3c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f3c9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f3c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f3ca0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f3ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f3ca4: 0xd43024  and         $a2, $a2, $s4
    ctx->pc = 0x4f3ca4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 20));
    // 0x4f3ca8: 0x8665013a  lh          $a1, 0x13A($s3)
    ctx->pc = 0x4f3ca8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 314)));
    // 0x4f3cac: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4f3cacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f3cb0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4f3cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4f3cb4: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4f3cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4f3cb8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f3cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f3cbc: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x4f3cbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4f3cc0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f3cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f3cc4: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x4f3cc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x4f3cc8: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4f3cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4f3ccc: 0x86650164  lh          $a1, 0x164($s3)
    ctx->pc = 0x4f3cccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x4f3cd0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4f3cd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f3cd4: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4f3cd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f3cd8: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x4f3cd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4f3cdc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4f3cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4f3ce0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4f3ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4f3ce4: 0x86650166  lh          $a1, 0x166($s3)
    ctx->pc = 0x4f3ce4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 358)));
    // 0x4f3ce8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4f3ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4f3cec: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x4f3cecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4f3cf0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4f3cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4f3cf4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F3CF4u;
    SET_GPR_U32(ctx, 31, 0x4F3CFCu);
    ctx->pc = 0x4F3CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3CF4u;
    // 0x4f3cf8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F3CF4u, 0x4F3CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3CFCu;
label_4f3cfc:
    // 0x4f3cfc: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F3CFCu;
    SET_GPR_U32(ctx, 31, 0x4F3D04u);
    ctx->pc = 0x4F3D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3CFCu;
    // 0x4f3d00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F3CFCu, 0x4F3D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3D04u;
label_4f3d04:
    // 0x4f3d04: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4f3d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f3d08: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4f3d08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f3d0c: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4f3d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
    // 0x4f3d10: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4f3d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4f3d14: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f3d14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f3d18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4f3d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f3d1c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f3d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f3d20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f3d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f3d24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f3d24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f3d28: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4f3d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4f3d2c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f3d2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f3d30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f3d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f3d34: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4f3d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f3d38: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4f3d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4f3d3c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4f3d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f3d40: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x4f3d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x4f3d44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4f3d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f3d48: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4f3d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4f3d4c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4f3d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4f3d50: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4f3d50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4f3d54: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4f3d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f3d58: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4f3d58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f3d5c: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x4f3d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x4f3d60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f3d60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f3d64: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4f3d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f3d68: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f3d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f3d6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f3d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f3d70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f3d70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f3d74: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4f3d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4f3d78: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f3d78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f3d7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f3d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f3d80: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4f3d80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4f3d84: 0x3e00008  jr          $ra
    ctx->pc = 0x4F3D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3D84u;
        // 0x4f3d88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F3D8Cu;
    // 0x4f3d8c: 0x0  nop
    ctx->pc = 0x4f3d8cu;
    // NOP
    ctx->pc = 0x4f3d90u;
}
