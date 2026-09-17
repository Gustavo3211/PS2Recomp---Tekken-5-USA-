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

// Function: sub_004A1B38
// Address: 0x4a1b38 - 0x4a1ea0
void sub_004A1B38_0x4a1b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A1B38_0x4a1b38");
#endif

    switch (ctx->pc) {
        case 0x4a1b8cu: goto label_4a1b8c;
        case 0x4a1c10u: goto label_4a1c10;
        case 0x4a1c5cu: goto label_4a1c5c;
        case 0x4a1ca8u: goto label_4a1ca8;
        case 0x4a1cf4u: goto label_4a1cf4;
        case 0x4a1d00u: goto label_4a1d00;
        case 0x4a1d0cu: goto label_4a1d0c;
        case 0x4a1d1cu: goto label_4a1d1c;
        case 0x4a1d3cu: goto label_4a1d3c;
        case 0x4a1d5cu: goto label_4a1d5c;
        case 0x4a1dc4u: goto label_4a1dc4;
        case 0x4a1e20u: goto label_4a1e20;
        case 0x4a1e30u: goto label_4a1e30;
        default: break;
    }

    ctx->pc = 0x4a1b38u;

    // 0x4a1b38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a1b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4a1b3c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4a1b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4a1b40: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x4a1b40u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1b44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a1b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a1b48: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4a1b48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4a1b4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a1b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4a1b50: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4a1b50u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4a1b54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4a1b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4a1b58: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4a1b58u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4a1b5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4a1b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4a1b60: 0x26520bf0  addiu       $s2, $s2, 0xBF0
    ctx->pc = 0x4a1b60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3056));
    // 0x4a1b64: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4a1b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4a1b68: 0x27d4015c  addiu       $s4, $fp, 0x15C
    ctx->pc = 0x4a1b68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 348));
    // 0x4a1b6c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4a1b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4a1b70: 0x27d50118  addiu       $s5, $fp, 0x118
    ctx->pc = 0x4a1b70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 280));
    // 0x4a1b74: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4a1b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4a1b78: 0x27d6011c  addiu       $s6, $fp, 0x11C
    ctx->pc = 0x4a1b78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 284));
    // 0x4a1b7c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4a1b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4a1b80: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4a1b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4a1b84: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4A1B84u;
    SET_GPR_U32(ctx, 31, 0x4A1B8Cu);
    ctx->pc = 0x4A1B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1B84u;
    // 0x4a1b88: 0x27d70120  addiu       $s7, $fp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4A1B84u, 0x4A1B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1B8Cu;
label_4a1b8c:
    // 0x4a1b8c: 0x8fc80158  lw          $t0, 0x158($fp)
    ctx->pc = 0x4a1b8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 344)));
    // 0x4a1b90: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4a1b90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4a1b94: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4a1b94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4a1b98: 0x24e70c04  addiu       $a3, $a3, 0xC04
    ctx->pc = 0x4a1b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3076));
    // 0x4a1b9c: 0x24c60bec  addiu       $a2, $a2, 0xBEC
    ctx->pc = 0x4a1b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3052));
    // 0x4a1ba0: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x4a1ba0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x7F0C04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0C04u, _value); } while (0);
    // 0x4a1ba4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x4a1ba4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0BECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0BECu, _value); } while (0);
    // 0x4a1ba8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4a1ba8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1bac: 0x26100bf4  addiu       $s0, $s0, 0xBF4
    ctx->pc = 0x4a1bacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3060));
    // 0x4a1bb0: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x4a1bb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x4a1bb4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4a1bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a1bb8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a1bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a1bbc: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x4a1bbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4a1bc0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4a1bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4a1bc4: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4a1bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4a1bc8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4a1bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4a1bcc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4a1bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4a1bd0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4a1bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4a1bd4: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x4a1bd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a1bd8: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x4a1bd8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a1bdc: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4a1bdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a1be0: 0x3084fffc  andi        $a0, $a0, 0xFFFC
    ctx->pc = 0x4a1be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65532);
    // 0x4a1be4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x4a1be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4a1be8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x4a1be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4a1bec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4a1becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4a1bf0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a1bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a1bf4: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x4a1bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4a1bf8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4a1bf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4a1bfc: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x4a1bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x4a1c00: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4a1c00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4a1c04: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4a1c04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4a1c08: 0xc1285ce  jal         func_4A1738
    ctx->pc = 0x4A1C08u;
    SET_GPR_U32(ctx, 31, 0x4A1C10u);
    ctx->pc = 0x4A1C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1C08u;
    // 0x4a1c0c: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1738u, 0x4A1C08u, 0x4A1C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1C10u;
label_4a1c10:
    // 0x4a1c10: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4a1c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a1c14: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4a1c14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a1c18: 0x27c50010  addiu       $a1, $fp, 0x10
    ctx->pc = 0x4a1c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x4a1c1c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4a1c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4a1c20: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a1c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a1c24: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a1c24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a1c28: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4a1c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a1c2c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a1c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a1c30: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4a1c30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4a1c34: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4a1c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4a1c38: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a1c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a1c3c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a1c3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a1c40: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a1c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a1c44: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a1c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a1c48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a1c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a1c4c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4a1c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4a1c50: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a1c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a1c54: 0xc1285ce  jal         func_4A1738
    ctx->pc = 0x4A1C54u;
    SET_GPR_U32(ctx, 31, 0x4A1C5Cu);
    ctx->pc = 0x4A1C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1C54u;
    // 0x4a1c58: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1738u, 0x4A1C54u, 0x4A1C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1C5Cu;
label_4a1c5c:
    // 0x4a1c5c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4a1c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a1c60: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x4a1c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4a1c64: 0x27c50014  addiu       $a1, $fp, 0x14
    ctx->pc = 0x4a1c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
    // 0x4a1c68: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4a1c68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a1c6c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a1c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a1c70: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4a1c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4a1c74: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a1c74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a1c78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a1c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a1c7c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4a1c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4a1c80: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4a1c80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a1c84: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4a1c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4a1c88: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a1c88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a1c8c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a1c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a1c90: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a1c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a1c94: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a1c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a1c98: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4a1c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4a1c9c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a1c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a1ca0: 0xc1285ce  jal         func_4A1738
    ctx->pc = 0x4A1CA0u;
    SET_GPR_U32(ctx, 31, 0x4A1CA8u);
    ctx->pc = 0x4A1CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1CA0u;
    // 0x4a1ca4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1738u, 0x4A1CA0u, 0x4A1CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1CA8u;
label_4a1ca8:
    // 0x4a1ca8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4a1ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a1cac: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x4a1cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4a1cb0: 0x27c50018  addiu       $a1, $fp, 0x18
    ctx->pc = 0x4a1cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 24));
    // 0x4a1cb4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4a1cb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a1cb8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a1cb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a1cbc: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4a1cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4a1cc0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a1cc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a1cc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a1cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a1cc8: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4a1cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4a1ccc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4a1cccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a1cd0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4a1cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4a1cd4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a1cd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a1cd8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a1cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a1cdc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a1cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a1ce0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a1ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a1ce4: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4a1ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4a1ce8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a1ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a1cec: 0xc1285ce  jal         func_4A1738
    ctx->pc = 0x4A1CECu;
    SET_GPR_U32(ctx, 31, 0x4A1CF4u);
    ctx->pc = 0x4A1CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1CECu;
    // 0x4a1cf0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1738u, 0x4A1CECu, 0x4A1CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1CF4u;
label_4a1cf4:
    // 0x4a1cf4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a1cf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a1cf8: 0xc1285ce  jal         func_4A1738
    ctx->pc = 0x4A1CF8u;
    SET_GPR_U32(ctx, 31, 0x4A1D00u);
    ctx->pc = 0x4A1CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1CF8u;
    // 0x4a1cfc: 0xa6a20000  sh          $v0, 0x0($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1738u, 0x4A1CF8u, 0x4A1D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1D00u;
label_4a1d00:
    // 0x4a1d00: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a1d00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a1d04: 0xc1285ce  jal         func_4A1738
    ctx->pc = 0x4A1D04u;
    SET_GPR_U32(ctx, 31, 0x4A1D0Cu);
    ctx->pc = 0x4A1D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1D04u;
    // 0x4a1d08: 0xa6c20000  sh          $v0, 0x0($s6) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1738u, 0x4A1D04u, 0x4A1D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1D0Cu;
label_4a1d0c:
    // 0x4a1d0c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a1d0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a1d10: 0xa6e20000  sh          $v0, 0x0($s7)
    ctx->pc = 0x4a1d10u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a1d14: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4A1D14u;
    SET_GPR_U32(ctx, 31, 0x4A1D1Cu);
    ctx->pc = 0x4A1D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1D14u;
    // 0x4a1d18: 0x86a40000  lh          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4A1D14u, 0x4A1D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1D1Cu;
label_4a1d1c:
    // 0x4a1d1c: 0x511824  and         $v1, $v0, $s1
    ctx->pc = 0x4a1d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4a1d20: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4a1d20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4a1d24: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4a1d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4a1d28: 0xa7c30022  sh          $v1, 0x22($fp)
    ctx->pc = 0x4a1d28u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a1d2c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4a1d2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a1d30: 0xa7c20024  sh          $v0, 0x24($fp)
    ctx->pc = 0x4a1d30u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a1d34: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4A1D34u;
    SET_GPR_U32(ctx, 31, 0x4A1D3Cu);
    ctx->pc = 0x4A1D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1D34u;
    // 0x4a1d38: 0x86c40000  lh          $a0, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4A1D34u, 0x4A1D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1D3Cu;
label_4a1d3c:
    // 0x4a1d3c: 0x511824  and         $v1, $v0, $s1
    ctx->pc = 0x4a1d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4a1d40: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4a1d40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4a1d44: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4a1d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4a1d48: 0xa7c30026  sh          $v1, 0x26($fp)
    ctx->pc = 0x4a1d48u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a1d4c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4a1d4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a1d50: 0xa7c20028  sh          $v0, 0x28($fp)
    ctx->pc = 0x4a1d50u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a1d54: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4A1D54u;
    SET_GPR_U32(ctx, 31, 0x4A1D5Cu);
    ctx->pc = 0x4A1D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1D54u;
    // 0x4a1d58: 0x86e40000  lh          $a0, 0x0($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4A1D54u, 0x4A1D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1D5Cu;
label_4a1d5c:
    // 0x4a1d5c: 0x511824  and         $v1, $v0, $s1
    ctx->pc = 0x4a1d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4a1d60: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4a1d60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4a1d64: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4a1d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4a1d68: 0xa7c3002a  sh          $v1, 0x2A($fp)
    ctx->pc = 0x4a1d68u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a1d6c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4a1d6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a1d70: 0xa7c2002c  sh          $v0, 0x2C($fp)
    ctx->pc = 0x4a1d70u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a1d74: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4a1d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4a1d78: 0x711024  and         $v0, $v1, $s1
    ctx->pc = 0x4a1d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4a1d7c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4a1d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4a1d80: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a1d80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a1d84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a1d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4a1d88: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a1d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a1d8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a1d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a1d90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a1d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a1d94: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4a1d94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4a1d98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a1d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a1d9c: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4a1d9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4a1da0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a1da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a1da4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a1da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a1da8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a1da8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a1dac: 0x518825  or          $s1, $v0, $s1
    ctx->pc = 0x4a1dacu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a1db0: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4a1db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4a1db4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A1DB4u;
    {
        const bool branch_taken_0x4a1db4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4A1DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1DB4u;
        // 0x4a1db8: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1db4) {
            ctx->pc = 0x4A1DC4u;
            goto label_4a1dc4;
        }
    }
    ctx->pc = 0x4A1DBCu;
    // 0x4a1dbc: 0xc123392  jal         func_48CE48
    ctx->pc = 0x4A1DBCu;
    SET_GPR_U32(ctx, 31, 0x4A1DC4u);
    ctx->pc = 0x4A1DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1DBCu;
    // 0x4a1dc0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CE48u, 0x4A1DBCu, 0x4A1DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1DC4u;
label_4a1dc4:
    // 0x4a1dc4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a1dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4a1dc8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a1dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a1dcc: 0x24470bfc  addiu       $a3, $v0, 0xBFC
    ctx->pc = 0x4a1dccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 3068));
    // 0x4a1dd0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a1dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4a1dd4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4a1dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0BFCu));
    // 0x4a1dd8: 0x34a50009  ori         $a1, $a1, 0x9
    ctx->pc = 0x4a1dd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9);
    // 0x4a1ddc: 0x24460bf8  addiu       $a2, $v0, 0xBF8
    ctx->pc = 0x4a1ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3064));
    // 0x4a1de0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4a1de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4a1de4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a1de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a1de8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4a1de8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0BF8u));
    // 0x4a1dec: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4a1decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4a1df0: 0x348404cf  ori         $a0, $a0, 0x4CF
    ctx->pc = 0x4a1df0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1231);
    // 0x4a1df4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4a1df4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4a1df8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a1df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a1dfc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4a1dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4a1e00: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x4a1e00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a1e04: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x4A1E04u;
    {
        const bool branch_taken_0x4a1e04 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4A1E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1E04u;
        // 0x4a1e08: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1e04) {
            ctx->pc = 0x4A1E70u;
            goto label_4a1e70;
        }
    }
    ctx->pc = 0x4A1E0Cu;
    // 0x4a1e0c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4a1e0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1e10: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4a1e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1e14: 0x27d3000c  addiu       $s3, $fp, 0xC
    ctx->pc = 0x4a1e14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
    // 0x4a1e18: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4a1e18u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4a1e1c: 0x0  nop
    ctx->pc = 0x4a1e1cu;
    // NOP
label_4a1e20:
    // 0x4a1e20: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4a1e20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a1e24: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4a1e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1e28: 0xc128b10  jal         func_4A2C40
    ctx->pc = 0x4A1E28u;
    SET_GPR_U32(ctx, 31, 0x4A1E30u);
    ctx->pc = 0x4A1E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1E28u;
    // 0x4a1e2c: 0xa6620000  sh          $v0, 0x0($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2C40u, 0x4A1E28u, 0x4A1E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1E30u;
label_4a1e30:
    // 0x4a1e30: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4a1e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a1e34: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a1e34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a1e38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4a1e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a1e3c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a1e3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a1e40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a1e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a1e44: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4a1e44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a1e48: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a1e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a1e4c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a1e4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a1e50: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a1e50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a1e54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4a1e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4a1e58: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4a1e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4a1e5c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4a1e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4a1e60: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4a1e60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4a1e64: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a1e64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a1e68: 0x441ffed  bgez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x4A1E68u;
    {
        const bool branch_taken_0x4a1e68 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4A1E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1E68u;
        // 0x4a1e6c: 0xae250000  sw          $a1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1e68) {
            ctx->pc = 0x4A1E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a1e20;
        }
    }
    ctx->pc = 0x4A1E70u;
label_4a1e70:
    // 0x4a1e70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a1e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a1e74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a1e74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a1e78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4a1e78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a1e7c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4a1e7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a1e80: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4a1e80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a1e84: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4a1e84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a1e88: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4a1e88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a1e8c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4a1e8cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4a1e90: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4a1e90u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a1e94: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4a1e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4a1e98: 0x3e00008  jr          $ra
    ctx->pc = 0x4A1E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1E98u;
        // 0x4a1e9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A1E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A1EA0u;
}
