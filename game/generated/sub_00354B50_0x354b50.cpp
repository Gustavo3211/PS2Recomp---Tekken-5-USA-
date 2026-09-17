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

// Function: sub_00354B50
// Address: 0x354b50 - 0x354c38
void sub_00354B50_0x354b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354B50_0x354b50");
#endif

    switch (ctx->pc) {
        case 0x354b84u: goto label_354b84;
        default: break;
    }

    ctx->pc = 0x354b50u;

    // 0x354b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x354b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x354b54: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x354b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x354b58: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x354b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x354b5c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x354b5cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354b60: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x354b60u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x354b64: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x354b64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x354b68: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x354b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x354b6c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x354b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x354b70: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x354b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x354b74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x354b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354b78: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x354b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x354b7c: 0xc0d530e  jal         func_354C38
    ctx->pc = 0x354B7Cu;
    SET_GPR_U32(ctx, 31, 0x354B84u);
    ctx->pc = 0x354C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354C38u, 0x354B7Cu, 0x354B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354B84u;
label_354b84:
    // 0x354b84: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x354b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x354b88: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x354b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x354b8c: 0x9c420090  lwu         $v0, 0x90($v0)
    ctx->pc = 0x354b8cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x354b90: 0xfc620100  sd          $v0, 0x100($v1)
    ctx->pc = 0x354b90u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 256), GPR_U64(ctx, 2));
    // 0x354b94: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x354b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x354b98: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x354b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x354b9c: 0x94420094  lhu         $v0, 0x94($v0)
    ctx->pc = 0x354b9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x354ba0: 0xac620110  sw          $v0, 0x110($v1)
    ctx->pc = 0x354ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 272), GPR_U32(ctx, 2));
    // 0x354ba4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x354ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x354ba8: 0x24420108  addiu       $v0, $v0, 0x108
    ctx->pc = 0x354ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 264));
    // 0x354bac: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x354bacu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x354bb0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x354bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x354bb4: 0x24420088  addiu       $v0, $v0, 0x88
    ctx->pc = 0x354bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x354bb8: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x354bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x354bbc: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x354bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x354bc0: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x354bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x354bc4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x354bc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x354bc8: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x354bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x354bcc: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x354bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x354bd0: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x354bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x354bd4: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x354bd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x354bd8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x354bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x354bdc: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x354bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x354be0: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x354be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x354be4: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x354be4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x354be8: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x354be8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x354bec: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x354becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x354bf0: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x354bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x354bf4: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x354bf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x354bf8: 0xa0620004  sb          $v0, 0x4($v1)
    ctx->pc = 0x354bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x354bfc: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x354bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x354c00: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x354c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x354c04: 0x90420005  lbu         $v0, 0x5($v0)
    ctx->pc = 0x354c04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x354c08: 0xa0620005  sb          $v0, 0x5($v1)
    ctx->pc = 0x354c08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x354c0c: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x354c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x354c10: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x354c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x354c14: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x354c14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x354c18: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x354c18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x354c1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x354c1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354c20: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x354c20u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354c24: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x354c24u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354c28: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x354c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x354c2c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x354c2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x354c30: 0x3e00008  jr          $ra
    ctx->pc = 0x354C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354C38u;
}
