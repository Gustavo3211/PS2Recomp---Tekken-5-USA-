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

// Function: sub_00489AE0
// Address: 0x489ae0 - 0x489d38
void sub_00489AE0_0x489ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00489AE0_0x489ae0");
#endif

    switch (ctx->pc) {
        case 0x489b74u: goto label_489b74;
        case 0x489b80u: goto label_489b80;
        default: break;
    }

    ctx->pc = 0x489ae0u;

    // 0x489ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x489ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x489ae4: 0x3c06007c  lui         $a2, 0x7C
    ctx->pc = 0x489ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)124 << 16));
    // 0x489ae8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x489ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x489aec: 0x3c10007c  lui         $s0, 0x7C
    ctx->pc = 0x489aecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)124 << 16));
    // 0x489af0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x489af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x489af4: 0x3c11007c  lui         $s1, 0x7C
    ctx->pc = 0x489af4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)124 << 16));
    // 0x489af8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x489af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x489afc: 0x3c12007c  lui         $s2, 0x7C
    ctx->pc = 0x489afcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)124 << 16));
    // 0x489b00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x489b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x489b04: 0x3c13007c  lui         $s3, 0x7C
    ctx->pc = 0x489b04u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)124 << 16));
    // 0x489b08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x489b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x489b0c: 0x24c65b14  addiu       $a2, $a2, 0x5B14
    ctx->pc = 0x489b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23316));
    // 0x489b10: 0x26315b08  addiu       $s1, $s1, 0x5B08
    ctx->pc = 0x489b10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 23304));
    // 0x489b14: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x489b14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x489b18: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x489b18u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7C5B14u));
    // 0x489b1c: 0x26735b0c  addiu       $s3, $s3, 0x5B0C
    ctx->pc = 0x489b1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 23308));
    // 0x489b20: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x489b20u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7C5B08u));
    // 0x489b24: 0x26105b18  addiu       $s0, $s0, 0x5B18
    ctx->pc = 0x489b24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23320));
    // 0x489b28: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x489b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x489b2c: 0x24a70006  addiu       $a3, $a1, 0x6
    ctx->pc = 0x489b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x489b30: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x489b30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7C5B14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7C5B14u, _value); } while (0);
    // 0x489b34: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x489b34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x489b38: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x489b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x489b3c: 0x26525b1c  addiu       $s2, $s2, 0x5B1C
    ctx->pc = 0x489b3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 23324));
    // 0x489b40: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x489b40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x489b44: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x489b44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x7C5B14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7C5B14u, _value); } while (0);
    // 0x489b48: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x489b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x489b4c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x489b4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x489b50: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x489b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x489b54: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x489b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x489b58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x489b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x489b5c: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x489b5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x489b60: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x489b60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x489b64: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x489b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x489b68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x489b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x489b6c: 0xc13e654  jal         func_4F9950
    ctx->pc = 0x489B6Cu;
    SET_GPR_U32(ctx, 31, 0x489B74u);
    ctx->pc = 0x489B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x489B6Cu;
    // 0x489b70: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9950u, 0x489B6Cu, 0x489B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489B74u;
label_489b74:
    // 0x489b74: 0x244201fe  addiu       $v0, $v0, 0x1FE
    ctx->pc = 0x489b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 510));
    // 0x489b78: 0xc13e654  jal         func_4F9950
    ctx->pc = 0x489B78u;
    SET_GPR_U32(ctx, 31, 0x489B80u);
    ctx->pc = 0x489B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x489B78u;
    // 0x489b7c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9950u, 0x489B78u, 0x489B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489B80u;
label_489b80:
    // 0x489b80: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x489b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x489b84: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x489b84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x489b88: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x489b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x489b8c: 0x342101fe  ori         $at, $at, 0x1FE
    ctx->pc = 0x489b8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)510);
    // 0x489b90: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x489b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x489b94: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x489b94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x489b98: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x489b98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x489b9c: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x489b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x489ba0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x489ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x489ba4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x489ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x489ba8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x489ba8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x489bac: 0xa4620200  sh          $v0, 0x200($v1)
    ctx->pc = 0x489bacu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 512), (uint16_t)GPR_U32(ctx, 2));
    // 0x489bb0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x489bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x489bb4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x489bb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x489bb8: 0xa4820400  sh          $v0, 0x400($a0)
    ctx->pc = 0x489bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1024), (uint16_t)GPR_U32(ctx, 2));
    // 0x489bbc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x489bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x489bc0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x489bc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x489bc4: 0xa4620600  sh          $v0, 0x600($v1)
    ctx->pc = 0x489bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1536), (uint16_t)GPR_U32(ctx, 2));
    // 0x489bc8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x489bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x489bcc: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x489bccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x489bd0: 0xa4820800  sh          $v0, 0x800($a0)
    ctx->pc = 0x489bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2048), (uint16_t)GPR_U32(ctx, 2));
    // 0x489bd4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x489bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x489bd8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x489bd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x489bdc: 0xa4620a00  sh          $v0, 0xA00($v1)
    ctx->pc = 0x489bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2560), (uint16_t)GPR_U32(ctx, 2));
    // 0x489be0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x489be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x489be4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x489be4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x489be8: 0xa4820c00  sh          $v0, 0xC00($a0)
    ctx->pc = 0x489be8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 3072), (uint16_t)GPR_U32(ctx, 2));
    // 0x489bec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x489becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x489bf0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x489bf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x489bf4: 0xa4620e00  sh          $v0, 0xE00($v1)
    ctx->pc = 0x489bf4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3584), (uint16_t)GPR_U32(ctx, 2));
    // 0x489bf8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x489bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x489bfc: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x489bfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x489c00: 0xa4821000  sh          $v0, 0x1000($a0)
    ctx->pc = 0x489c00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4096), (uint16_t)GPR_U32(ctx, 2));
    // 0x489c04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x489c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x489c08: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x489c08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x489c0c: 0xa4621200  sh          $v0, 0x1200($v1)
    ctx->pc = 0x489c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4608), (uint16_t)GPR_U32(ctx, 2));
    // 0x489c10: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x489c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x489c14: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x489c14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x489c18: 0xa4821400  sh          $v0, 0x1400($a0)
    ctx->pc = 0x489c18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5120), (uint16_t)GPR_U32(ctx, 2));
    // 0x489c1c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x489c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x489c20: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x489c20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x489c24: 0xa4621600  sh          $v0, 0x1600($v1)
    ctx->pc = 0x489c24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5632), (uint16_t)GPR_U32(ctx, 2));
    // 0x489c28: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x489c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x489c2c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x489c2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x489c30: 0xa4821800  sh          $v0, 0x1800($a0)
    ctx->pc = 0x489c30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6144), (uint16_t)GPR_U32(ctx, 2));
    // 0x489c34: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x489c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x489c38: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x489c38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x489c3c: 0xa4621a00  sh          $v0, 0x1A00($v1)
    ctx->pc = 0x489c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6656), (uint16_t)GPR_U32(ctx, 2));
    // 0x489c40: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x489c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x489c44: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x489c44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x489c48: 0xa4821c00  sh          $v0, 0x1C00($a0)
    ctx->pc = 0x489c48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 7168), (uint16_t)GPR_U32(ctx, 2));
    // 0x489c4c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x489c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x489c50: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x489c50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x489c54: 0xa4621e00  sh          $v0, 0x1E00($v1)
    ctx->pc = 0x489c54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 7680), (uint16_t)GPR_U32(ctx, 2));
    // 0x489c58: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x489c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x489c5c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x489c5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x489c60: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x489c60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x489c64: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x489c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x489c68: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x489c68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x489c6c: 0xa4620200  sh          $v0, 0x200($v1)
    ctx->pc = 0x489c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 512), (uint16_t)GPR_U32(ctx, 2));
    // 0x489c70: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x489c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x489c74: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x489c74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x489c78: 0xa4820400  sh          $v0, 0x400($a0)
    ctx->pc = 0x489c78u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1024), (uint16_t)GPR_U32(ctx, 2));
    // 0x489c7c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x489c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x489c80: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x489c80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x489c84: 0xa4620600  sh          $v0, 0x600($v1)
    ctx->pc = 0x489c84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1536), (uint16_t)GPR_U32(ctx, 2));
    // 0x489c88: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x489c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x489c8c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x489c8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x489c90: 0xa4820800  sh          $v0, 0x800($a0)
    ctx->pc = 0x489c90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2048), (uint16_t)GPR_U32(ctx, 2));
    // 0x489c94: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x489c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x489c98: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x489c98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x489c9c: 0xa4620a00  sh          $v0, 0xA00($v1)
    ctx->pc = 0x489c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2560), (uint16_t)GPR_U32(ctx, 2));
    // 0x489ca0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x489ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x489ca4: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x489ca4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x489ca8: 0xa4820c00  sh          $v0, 0xC00($a0)
    ctx->pc = 0x489ca8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 3072), (uint16_t)GPR_U32(ctx, 2));
    // 0x489cac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x489cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x489cb0: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x489cb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x489cb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x489cb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489cb8: 0xa4620e00  sh          $v0, 0xE00($v1)
    ctx->pc = 0x489cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3584), (uint16_t)GPR_U32(ctx, 2));
    // 0x489cbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x489cbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x489cc0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x489cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x489cc4: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x489cc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x489cc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x489cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x489ccc: 0xa4821000  sh          $v0, 0x1000($a0)
    ctx->pc = 0x489cccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4096), (uint16_t)GPR_U32(ctx, 2));
    // 0x489cd0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x489cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x489cd4: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x489cd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x489cd8: 0xa4621200  sh          $v0, 0x1200($v1)
    ctx->pc = 0x489cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4608), (uint16_t)GPR_U32(ctx, 2));
    // 0x489cdc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x489cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x489ce0: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x489ce0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x489ce4: 0xa4821400  sh          $v0, 0x1400($a0)
    ctx->pc = 0x489ce4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5120), (uint16_t)GPR_U32(ctx, 2));
    // 0x489ce8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x489ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x489cec: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x489cecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x489cf0: 0xa4621600  sh          $v0, 0x1600($v1)
    ctx->pc = 0x489cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5632), (uint16_t)GPR_U32(ctx, 2));
    // 0x489cf4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x489cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x489cf8: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x489cf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x489cfc: 0xa4821800  sh          $v0, 0x1800($a0)
    ctx->pc = 0x489cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6144), (uint16_t)GPR_U32(ctx, 2));
    // 0x489d00: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x489d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x489d04: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x489d04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x489d08: 0xa4621a00  sh          $v0, 0x1A00($v1)
    ctx->pc = 0x489d08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6656), (uint16_t)GPR_U32(ctx, 2));
    // 0x489d0c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x489d0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x489d10: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x489d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x489d14: 0xa4821c00  sh          $v0, 0x1C00($a0)
    ctx->pc = 0x489d14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 7168), (uint16_t)GPR_U32(ctx, 2));
    // 0x489d18: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x489d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x489d1c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x489d1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x489d20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x489d20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x489d24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x489d24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x489d28: 0xa4621e00  sh          $v0, 0x1E00($v1)
    ctx->pc = 0x489d28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 7680), (uint16_t)GPR_U32(ctx, 2));
    // 0x489d2c: 0xacc507c0  sw          $a1, 0x7C0($a2)
    ctx->pc = 0x489d2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7F07C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F07C0u, _value); } while (0);
    // 0x489d30: 0x3e00008  jr          $ra
    ctx->pc = 0x489D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x489D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489D30u;
        // 0x489d34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x489D38u;
}
