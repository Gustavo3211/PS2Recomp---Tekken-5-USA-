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

// Function: sub_004E0CB0
// Address: 0x4e0cb0 - 0x4e1240
void sub_004E0CB0_0x4e0cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E0CB0_0x4e0cb0");
#endif

    switch (ctx->pc) {
        case 0x4e0cf8u: goto label_4e0cf8;
        case 0x4e0d00u: goto label_4e0d00;
        case 0x4e0d20u: goto label_4e0d20;
        case 0x4e0e80u: goto label_4e0e80;
        case 0x4e0f20u: goto label_4e0f20;
        case 0x4e0f28u: goto label_4e0f28;
        case 0x4e0f30u: goto label_4e0f30;
        case 0x4e0f38u: goto label_4e0f38;
        case 0x4e10bcu: goto label_4e10bc;
        case 0x4e110cu: goto label_4e110c;
        case 0x4e112cu: goto label_4e112c;
        case 0x4e1190u: goto label_4e1190;
        case 0x4e11a8u: goto label_4e11a8;
        case 0x4e11dcu: goto label_4e11dc;
        case 0x4e11e4u: goto label_4e11e4;
        case 0x4e11f0u: goto label_4e11f0;
        case 0x4e1204u: goto label_4e1204;
        case 0x4e1218u: goto label_4e1218;
        case 0x4e1228u: goto label_4e1228;
        default: break;
    }

    ctx->pc = 0x4e0cb0u;

    // 0x4e0cb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e0cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4e0cb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e0cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4e0cb8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4e0cb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0cbc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4e0cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4e0cc0: 0x265301b4  addiu       $s3, $s2, 0x1B4
    ctx->pc = 0x4e0cc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 436));
    // 0x4e0cc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e0cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e0cc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e0cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e0ccc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4e0cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4e0cd0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4e0cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4e0cd4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4e0cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4e0cd8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4e0cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4e0cdc: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4e0cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4e0ce0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4e0ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4e0ce4: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4e0ce4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e0ce8: 0x4400047  bltz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x4E0CE8u;
    {
        const bool branch_taken_0x4e0ce8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4E0CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0CE8u;
        // 0x4e0cec: 0x3c14007f  lui         $s4, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0ce8) {
            ctx->pc = 0x4E0E08u;
            goto label_4e0e08;
        }
    }
    ctx->pc = 0x4E0CF0u;
    // 0x4e0cf0: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4E0CF0u;
    SET_GPR_U32(ctx, 31, 0x4E0CF8u);
    ctx->pc = 0x4E0CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0CF0u;
    // 0x4e0cf4: 0x3c11ffff  lui         $s1, 0xFFFF (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4E0CF0u, 0x4E0CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0CF8u;
label_4e0cf8:
    // 0x4e0cf8: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4E0CF8u;
    SET_GPR_U32(ctx, 31, 0x4E0D00u);
    ctx->pc = 0x4E0CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0CF8u;
    // 0x4e0cfc: 0x26901168  addiu       $s0, $s4, 0x1168 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4E0CF8u, 0x4E0D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0D00u;
label_4e0d00:
    // 0x4e0d00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e0d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e0d04: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e0d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e0d08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e0d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e0d0c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e0d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e0d10: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e0d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e0d14: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e0d14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e0d18: 0xc129364  jal         func_4A4D90
    ctx->pc = 0x4E0D18u;
    SET_GPR_U32(ctx, 31, 0x4E0D20u);
    ctx->pc = 0x4E0D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0D18u;
    // 0x4e0d1c: 0xa642015e  sh          $v0, 0x15E($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 350), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4D90u, 0x4E0D18u, 0x4E0D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0D20u;
label_4e0d20:
    // 0x4e0d20: 0x3c070073  lui         $a3, 0x73
    ctx->pc = 0x4e0d20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
    // 0x4e0d24: 0x24e7d680  addiu       $a3, $a3, -0x2980
    ctx->pc = 0x4e0d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956672));
    // 0x4e0d28: 0x26490008  addiu       $t1, $s2, 0x8
    ctx->pc = 0x4e0d28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x4e0d2c: 0x24e80036  addiu       $t0, $a3, 0x36
    ctx->pc = 0x4e0d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 54));
    // 0x4e0d30: 0x24e70038  addiu       $a3, $a3, 0x38
    ctx->pc = 0x4e0d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 56));
    // 0x4e0d34: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4e0d34u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72D6B6u));
    // 0x4e0d38: 0x3c0a0054  lui         $t2, 0x54
    ctx->pc = 0x4e0d38u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)84 << 16));
    // 0x4e0d3c: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x4e0d3cu;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x72D6B8u));
    // 0x4e0d40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4e0d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4e0d44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4e0d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e0d48: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4e0d48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4e0d4c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x4e0d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4e0d50: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4e0d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4e0d54: 0x94860000  lhu         $a2, 0x0($a0)
    ctx->pc = 0x4e0d54u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e0d58: 0xa6460160  sh          $a2, 0x160($s2)
    ctx->pc = 0x4e0d58u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 352), (uint16_t)GPR_U32(ctx, 6));
    // 0x4e0d5c: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4e0d5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e0d60: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x4e0d60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e0d64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4e0d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4e0d68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4e0d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e0d6c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4e0d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4e0d70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4e0d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4e0d74: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4e0d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4e0d78: 0x94850002  lhu         $a1, 0x2($a0)
    ctx->pc = 0x4e0d78u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x4e0d7c: 0xa6450162  sh          $a1, 0x162($s2)
    ctx->pc = 0x4e0d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 354), (uint16_t)GPR_U32(ctx, 5));
    // 0x4e0d80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e0d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e0d84: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4e0d84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e0d88: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e0d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e0d8c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e0d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e0d90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e0d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e0d94: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e0d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e0d98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e0d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e0d9c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e0d9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e0da0: 0x2442ff8d  addiu       $v0, $v0, -0x73
    ctx->pc = 0x4e0da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967181));
    // 0x4e0da4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e0da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e0da8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e0da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e0dac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e0dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e0db0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e0db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e0db4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e0db4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e0db8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4e0db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4e0dbc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e0dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e0dc0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e0dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e0dc4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e0dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e0dc8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e0dc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e0dcc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e0dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e0dd0: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e0dd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e0dd4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e0dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e0dd8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4e0dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4e0ddc: 0x24217c88  addiu       $at, $at, 0x7C88
    ctx->pc = 0x4e0ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 31880));
    // 0x4e0de0: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4e0de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4e0de4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4e0de4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e0de8: 0xa643000c  sh          $v1, 0xC($s2)
    ctx->pc = 0x4e0de8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e0dec: 0x9444000c  lhu         $a0, 0xC($v0)
    ctx->pc = 0x4e0decu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4e0df0: 0xa6440158  sh          $a0, 0x158($s2)
    ctx->pc = 0x4e0df0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 344), (uint16_t)GPR_U32(ctx, 4));
    // 0x4e0df4: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4e0df4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e0df8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4e0df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4e0dfc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4E0DFCu;
    {
        const bool branch_taken_0x4e0dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0DFCu;
        // 0x4e0e00: 0xa6620000  sh          $v0, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0dfc) {
            ctx->pc = 0x4E0E10u;
            goto label_4e0e10;
        }
    }
    ctx->pc = 0x4E0E04u;
    // 0x4e0e04: 0x0  nop
    ctx->pc = 0x4e0e04u;
    // NOP
label_4e0e08:
    // 0x4e0e08: 0x26490008  addiu       $t1, $s2, 0x8
    ctx->pc = 0x4e0e08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x4e0e0c: 0x3c0a0054  lui         $t2, 0x54
    ctx->pc = 0x4e0e0cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)84 << 16));
label_4e0e10:
    // 0x4e0e10: 0x26901168  addiu       $s0, $s4, 0x1168
    ctx->pc = 0x4e0e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4456));
    // 0x4e0e14: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4e0e14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e0e18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e0e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e0e1c: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4e0e1cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4e0e20: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e0e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e0e24: 0x25537c88  addiu       $s3, $t2, 0x7C88
    ctx->pc = 0x4e0e24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 10), 31880));
    // 0x4e0e28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e0e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e0e2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e0e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0e30: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e0e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e0e34: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e0e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e0e38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e0e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e0e3c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e0e3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e0e40: 0x2442ff8d  addiu       $v0, $v0, -0x73
    ctx->pc = 0x4e0e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967181));
    // 0x4e0e44: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e0e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e0e48: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e0e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e0e4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e0e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e0e50: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e0e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e0e54: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e0e54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e0e58: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4e0e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4e0e5c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e0e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e0e60: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e0e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e0e64: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e0e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e0e68: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e0e68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e0e6c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e0e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e0e70: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e0e70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e0e74: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e0e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e0e78: 0xc1230b4  jal         func_48C2D0
    ctx->pc = 0x4E0E78u;
    SET_GPR_U32(ctx, 31, 0x4E0E80u);
    ctx->pc = 0x4E0E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0E78u;
    // 0x4e0e7c: 0x539821  addu        $s3, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C2D0u, 0x4E0E78u, 0x4E0E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0E80u;
label_4e0e80:
    // 0x4e0e80: 0x504000b7  beql        $v0, $zero, . + 4 + (0xB7 << 2)
    ctx->pc = 0x4E0E80u;
    {
        const bool branch_taken_0x4e0e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0e80) {
            ctx->pc = 0x4E0E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0E80u;
            // 0x4e0e84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1160u;
            goto label_4e1160;
        }
    }
    ctx->pc = 0x4E0E88u;
    // 0x4e0e88: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e0e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e0e8c: 0x864201b6  lh          $v0, 0x1B6($s2)
    ctx->pc = 0x4e0e8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 438)));
    // 0x4e0e90: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e0e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e0e94: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e0e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e0e98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e0e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e0e9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e0e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e0ea0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e0ea0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e0ea4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x4e0ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x4e0ea8: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4E0EA8u;
    {
        const bool branch_taken_0x4e0ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E0EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0EA8u;
        // 0x4e0eac: 0x3c0b007f  lui         $t3, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0ea8) {
            ctx->pc = 0x4E0F30u;
            goto label_4e0f30;
        }
    }
    ctx->pc = 0x4E0EB0u;
    // 0x4e0eb0: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4e0eb0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4e0eb4: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4e0eb4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4e0eb8: 0x256b1170  addiu       $t3, $t3, 0x1170
    ctx->pc = 0x4e0eb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4464));
    // 0x4e0ebc: 0x258c1174  addiu       $t4, $t4, 0x1174
    ctx->pc = 0x4e0ebcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4468));
    // 0x4e0ec0: 0x25ad1178  addiu       $t5, $t5, 0x1178
    ctx->pc = 0x4e0ec0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4472));
    // 0x4e0ec4: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x4e0ec4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4e0ec8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e0ec8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0ecc: 0x8d880000  lw          $t0, 0x0($t4)
    ctx->pc = 0x4e0eccu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F1174u));
    // 0x4e0ed0: 0x8da90000  lw          $t1, 0x0($t5)
    ctx->pc = 0x4e0ed0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F1178u));
    // 0x4e0ed4: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4e0ed4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4e0ed8: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x4e0ed8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x4e0edc: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4e0edcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4e0ee0: 0x86640004  lh          $a0, 0x4($s3)
    ctx->pc = 0x4e0ee0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4e0ee4: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4e0ee4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4e0ee8: 0x86620006  lh          $v0, 0x6($s3)
    ctx->pc = 0x4e0ee8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x4e0eec: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4e0eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4e0ef0: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4e0ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4e0ef4: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x4e0ef4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x4e0ef8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e0ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e0efc: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x4e0efcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x4e0f00: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4e0f00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4e0f04: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x4e0f04u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x4e0f08: 0xad880000  sw          $t0, 0x0($t4)
    ctx->pc = 0x4e0f08u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
    // 0x4e0f0c: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x4e0f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0f10: 0xada90000  sw          $t1, 0x0($t5)
    ctx->pc = 0x4e0f10u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 9));
    // 0x4e0f14: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4e0f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0f18: 0xc127c58  jal         func_49F160
    ctx->pc = 0x4E0F18u;
    SET_GPR_U32(ctx, 31, 0x4E0F20u);
    ctx->pc = 0x4E0F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0F18u;
    // 0x4e0f1c: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F160u, 0x4E0F18u, 0x4E0F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0F20u;
label_4e0f20:
    // 0x4e0f20: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4E0F20u;
    SET_GPR_U32(ctx, 31, 0x4E0F28u);
    ctx->pc = 0x4E0F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0F20u;
    // 0x4e0f24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4E0F20u, 0x4E0F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0F28u;
label_4e0f28:
    // 0x4e0f28: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4E0F28u;
    SET_GPR_U32(ctx, 31, 0x4E0F30u);
    ctx->pc = 0x4E0F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0F28u;
    // 0x4e0f2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4E0F28u, 0x4E0F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0F30u;
label_4e0f30:
    // 0x4e0f30: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4E0F30u;
    SET_GPR_U32(ctx, 31, 0x4E0F38u);
    ctx->pc = 0x4E0F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0F30u;
    // 0x4e0f34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4E0F30u, 0x4E0F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0F38u;
label_4e0f38:
    // 0x4e0f38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e0f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e0f3c: 0x864201be  lh          $v0, 0x1BE($s2)
    ctx->pc = 0x4e0f3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 446)));
    // 0x4e0f40: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e0f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e0f44: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e0f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e0f48: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e0f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e0f4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e0f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e0f50: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e0f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e0f54: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e0f54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e0f58: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x4e0f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x4e0f5c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e0f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e0f60: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e0f60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e0f64: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e0f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e0f68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e0f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e0f6c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e0f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e0f70: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e0f70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e0f74: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x4E0F74u;
    {
        const bool branch_taken_0x4e0f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E0F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0F74u;
        // 0x4e0f78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0f74) {
            ctx->pc = 0x4E1130u;
            goto label_4e1130;
        }
    }
    ctx->pc = 0x4E0F7Cu;
    // 0x4e0f7c: 0x86620008  lh          $v0, 0x8($s3)
    ctx->pc = 0x4e0f7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4e0f80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e0f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e0f84: 0x2645015e  addiu       $a1, $s2, 0x15E
    ctx->pc = 0x4e0f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 350));
    // 0x4e0f88: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e0f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e0f8c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e0f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e0f90: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e0f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e0f94: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x4e0f94u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e0f98: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4e0f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4e0f9c: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x4e0f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4e0fa0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e0fa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e0fa4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e0fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e0fa8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4e0fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4e0fac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e0facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e0fb0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e0fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e0fb4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e0fb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e0fb8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e0fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e0fbc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e0fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e0fc0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e0fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e0fc4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e0fc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e0fc8: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x4E0FC8u;
    {
        const bool branch_taken_0x4e0fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E0FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0FC8u;
        // 0x4e0fcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0fc8) {
            ctx->pc = 0x4E1130u;
            goto label_4e1130;
        }
    }
    ctx->pc = 0x4E0FD0u;
    // 0x4e0fd0: 0x9662000a  lhu         $v0, 0xA($s3)
    ctx->pc = 0x4e0fd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x4e0fd4: 0x3c070073  lui         $a3, 0x73
    ctx->pc = 0x4e0fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
    // 0x4e0fd8: 0x24e7d680  addiu       $a3, $a3, -0x2980
    ctx->pc = 0x4e0fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956672));
    // 0x4e0fdc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e0fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e0fe0: 0xa4e22330  sh          $v0, 0x2330($a3)
    ctx->pc = 0x4e0fe0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B0u, _value); } while (0);
    // 0x4e0fe4: 0x24751170  addiu       $s5, $v1, 0x1170
    ctx->pc = 0x4e0fe4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4464));
    // 0x4e0fe8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e0fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e0fec: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4e0fecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4e0ff0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x4e0ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4e0ff4: 0x24761174  addiu       $s6, $v1, 0x1174
    ctx->pc = 0x4e0ff4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4468));
    // 0x4e0ff8: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4e0ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1170u));
    // 0x4e0ffc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e0ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e1000: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4e1000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4e1004: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x4e1004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e1008: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4e1008u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4e100c: 0x254a1178  addiu       $t2, $t2, 0x1178
    ctx->pc = 0x4e100cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4472));
    // 0x4e1010: 0xa4e22334  sh          $v0, 0x2334($a3)
    ctx->pc = 0x4e1010u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9012), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e1014: 0x2474116c  addiu       $s4, $v1, 0x116C
    ctx->pc = 0x4e1014u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4460));
    // 0x4e1018: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4e1018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4e101c: 0x24f7233a  addiu       $s7, $a3, 0x233A
    ctx->pc = 0x4e101cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), 9018));
    // 0x4e1020: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x4e1020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4e1024: 0x34630c00  ori         $v1, $v1, 0xC00
    ctx->pc = 0x4e1024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3072);
    // 0x4e1028: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x4e1028u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4e102c: 0x24fe233c  addiu       $fp, $a3, 0x233C
    ctx->pc = 0x4e102cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), 9020));
    // 0x4e1030: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4e1030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4e1034: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x4e1034u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e1038: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4e1038u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4e103c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e103cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e1040: 0xa4e22336  sh          $v0, 0x2336($a3)
    ctx->pc = 0x4e1040u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9014), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e1044: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4e1044u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4e1048: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4e1048u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4e104c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4e104cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4e1050: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x4e1050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x4e1054: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4e1054u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4e1058: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x4e1058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e105c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4e105cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4e1060: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4e1060u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4e1064: 0xa4e22338  sh          $v0, 0x2338($a3)
    ctx->pc = 0x4e1064u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9016), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e1068: 0x96430118  lhu         $v1, 0x118($s2)
    ctx->pc = 0x4e1068u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 280)));
    // 0x4e106c: 0xa6e30000  sh          $v1, 0x0($s7)
    ctx->pc = 0x4e106cu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e1070: 0x9642011c  lhu         $v0, 0x11C($s2)
    ctx->pc = 0x4e1070u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 284)));
    // 0x4e1074: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x4e1074u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e1078: 0x96430120  lhu         $v1, 0x120($s2)
    ctx->pc = 0x4e1078u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x4e107c: 0xa4e3233e  sh          $v1, 0x233E($a3)
    ctx->pc = 0x4e107cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9022), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e1080: 0x86420130  lh          $v0, 0x130($s2)
    ctx->pc = 0x4e1080u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x4e1084: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e1084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e1088: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4e1088u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4e108c: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4e108cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4e1090: 0x86420132  lh          $v0, 0x132($s2)
    ctx->pc = 0x4e1090u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 306)));
    // 0x4e1094: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e1094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e1098: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4e1098u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4e109c: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x4e109cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
    // 0x4e10a0: 0x86420134  lh          $v0, 0x134($s2)
    ctx->pc = 0x4e10a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 308)));
    // 0x4e10a4: 0xae880000  sw          $t0, 0x0($s4)
    ctx->pc = 0x4e10a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 8));
    // 0x4e10a8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e10a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e10ac: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4e10acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4e10b0: 0xad490000  sw          $t1, 0x0($t2)
    ctx->pc = 0x4e10b0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    // 0x4e10b4: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4E10B4u;
    SET_GPR_U32(ctx, 31, 0x4E10BCu);
    ctx->pc = 0x4E10B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E10B4u;
    // 0x4e10b8: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4E10B4u, 0x4E10BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E10BCu;
label_4e10bc:
    // 0x4e10bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4e10bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e10c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e10c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e10c4: 0x16620017  bne         $s3, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4E10C4u;
    {
        const bool branch_taken_0x4e10c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E10C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E10C4u;
        // 0x4e10c8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e10c4) {
            ctx->pc = 0x4E1124u;
            goto label_4e1124;
        }
    }
    ctx->pc = 0x4E10CCu;
    // 0x4e10cc: 0x86420160  lh          $v0, 0x160($s2)
    ctx->pc = 0x4e10ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x4e10d0: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4e10d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e10d4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4e10d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e10d8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e10d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e10dc: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4e10dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e10e0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e10e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e10e4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x4e10e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e10e8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4e10e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4e10ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e10ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e10f0: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4e10f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4e10f4: 0x86420162  lh          $v0, 0x162($s2)
    ctx->pc = 0x4e10f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 354)));
    // 0x4e10f8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e10f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e10fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e10fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e1100: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4e1100u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4e1104: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4E1104u;
    SET_GPR_U32(ctx, 31, 0x4E110Cu);
    ctx->pc = 0x4E1108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1104u;
    // 0x4e1108: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4E1104u, 0x4E110Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E110Cu;
label_4e110c:
    // 0x4e110c: 0x14530005  bne         $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E110Cu;
    {
        const bool branch_taken_0x4e110c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x4e110c) {
            ctx->pc = 0x4E1124u;
            goto label_4e1124;
        }
    }
    ctx->pc = 0x4E1114u;
    // 0x4e1114: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e1114u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e1118: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4e1118u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e111c: 0xa6e20000  sh          $v0, 0x0($s7)
    ctx->pc = 0x4e111cu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e1120: 0xa7c30000  sh          $v1, 0x0($fp)
    ctx->pc = 0x4e1120u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 3));
label_4e1124:
    // 0x4e1124: 0xc127a8c  jal         func_49EA30
    ctx->pc = 0x4E1124u;
    SET_GPR_U32(ctx, 31, 0x4E112Cu);
    ctx->pc = 0x4E1128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1124u;
    // 0x4e1128: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EA30u, 0x4E1124u, 0x4E112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E112Cu;
label_4e112c:
    // 0x4e112c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e112cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e1130:
    // 0x4e1130: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e1130u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e1134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e1134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e1138: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e1138u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e113c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e113cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e1140: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e1140u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e1144: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e1144u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e1148: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e1148u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e114c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4e114cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e1150: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4e1150u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e1154: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4e1154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4e1158: 0x8138464  j           func_4E1190
    ctx->pc = 0x4E1158u;
    ctx->pc = 0x4E115Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1158u;
    // 0x4e115c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E1190u;
    goto label_4e1190;
    ctx->pc = 0x4E1160u;
label_4e1160:
    // 0x4e1160: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e1160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e1164: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e1164u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e1168: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e1168u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e116c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e116cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e1170: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e1170u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e1174: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e1174u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e1178: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4e1178u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e117c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4e117cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e1180: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4e1180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4e1184: 0x3e00008  jr          $ra
    ctx->pc = 0x4E1184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E1188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1184u;
        // 0x4e1188: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E1184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E118Cu;
    // 0x4e118c: 0x0  nop
    ctx->pc = 0x4e118cu;
    // NOP
label_4e1190:
    // 0x4e1190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e1190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4e1194: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e1194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e1198: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e1198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e119c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e119cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4e11a0: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4E11A0u;
    SET_GPR_U32(ctx, 31, 0x4E11A8u);
    ctx->pc = 0x4E11A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E11A0u;
    // 0x4e11a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4E11A0u, 0x4E11A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E11A8u;
label_4e11a8:
    // 0x4e11a8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e11a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e11ac: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4e11acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4e11b0: 0x2463117c  addiu       $v1, $v1, 0x117C
    ctx->pc = 0x4e11b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4476));
    // 0x4e11b4: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x4e11b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x4e11b8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4E11B8u;
    {
        const bool branch_taken_0x4e11b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E11BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E11B8u;
        // 0x4e11bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e11b8) {
            ctx->pc = 0x4E1228u;
            goto label_4e1228;
        }
    }
    ctx->pc = 0x4E11C0u;
    // 0x4e11c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4e11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4e11c4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x4e11c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e11c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e11c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e11cc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4e11ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4e11d0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4e11d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4e11d4: 0xc12b280  jal         func_4ACA00
    ctx->pc = 0x4E11D4u;
    SET_GPR_U32(ctx, 31, 0x4E11DCu);
    ctx->pc = 0x4E11D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E11D4u;
    // 0x4e11d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ACA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ACA00u, 0x4E11D4u, 0x4E11DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E11DCu;
label_4e11dc:
    // 0x4e11dc: 0xc12b3d4  jal         func_4ACF50
    ctx->pc = 0x4E11DCu;
    SET_GPR_U32(ctx, 31, 0x4E11E4u);
    ctx->pc = 0x4E11E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E11DCu;
    // 0x4e11e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ACF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ACF50u, 0x4E11DCu, 0x4E11E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E11E4u;
label_4e11e4:
    // 0x4e11e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e11e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e11e8: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4E11E8u;
    SET_GPR_U32(ctx, 31, 0x4E11F0u);
    ctx->pc = 0x4E11ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E11E8u;
    // 0x4e11ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4E11E8u, 0x4E11F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E11F0u;
label_4e11f0:
    // 0x4e11f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e11f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e11f4: 0x14510006  bne         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4E11F4u;
    {
        const bool branch_taken_0x4e11f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4E11F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E11F4u;
        // 0x4e11f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e11f4) {
            ctx->pc = 0x4E1210u;
            goto label_4e1210;
        }
    }
    ctx->pc = 0x4E11FCu;
    // 0x4e11fc: 0xc138490  jal         func_4E1240
    ctx->pc = 0x4E11FCu;
    SET_GPR_U32(ctx, 31, 0x4E1204u);
    ctx->pc = 0x4E1240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E1240u, 0x4E11FCu, 0x4E1204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1204u;
label_4e1204:
    // 0x4e1204: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4E1204u;
    {
        const bool branch_taken_0x4e1204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1204u;
        // 0x4e1208: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1204) {
            ctx->pc = 0x4E122Cu;
            goto label_4e122c;
        }
    }
    ctx->pc = 0x4E120Cu;
    // 0x4e120c: 0x0  nop
    ctx->pc = 0x4e120cu;
    // NOP
label_4e1210:
    // 0x4e1210: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4E1210u;
    SET_GPR_U32(ctx, 31, 0x4E1218u);
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4E1210u, 0x4E1218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1218u;
label_4e1218:
    // 0x4e1218: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E1218u;
    {
        const bool branch_taken_0x4e1218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x4e1218) {
            ctx->pc = 0x4E121Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1218u;
            // 0x4e121c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E122Cu;
            goto label_4e122c;
        }
    }
    ctx->pc = 0x4E1220u;
    // 0x4e1220: 0xc1384a8  jal         func_4E12A0
    ctx->pc = 0x4E1220u;
    SET_GPR_U32(ctx, 31, 0x4E1228u);
    ctx->pc = 0x4E1224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1220u;
    // 0x4e1224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E12A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E12A0u, 0x4E1220u, 0x4E1228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1228u;
label_4e1228:
    // 0x4e1228: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e1228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e122c:
    // 0x4e122c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e122cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e1230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e1230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e1234: 0x3e00008  jr          $ra
    ctx->pc = 0x4E1234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E1238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1234u;
        // 0x4e1238: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E1234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E123Cu;
    // 0x4e123c: 0x0  nop
    ctx->pc = 0x4e123cu;
    // NOP
    ctx->pc = 0x4e1240u;
}
