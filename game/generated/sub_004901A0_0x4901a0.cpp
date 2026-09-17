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

// Function: sub_004901A0
// Address: 0x4901a0 - 0x490240
void sub_004901A0_0x4901a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004901A0_0x4901a0");
#endif

    switch (ctx->pc) {
        case 0x4901d4u: goto label_4901d4;
        case 0x4901f8u: goto label_4901f8;
        case 0x49021cu: goto label_49021c;
        default: break;
    }

    ctx->pc = 0x4901a0u;

    // 0x4901a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4901a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4901a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4901a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4901a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4901a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4901ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4901acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4901b0: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x4901b0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
    // 0x4901b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4901b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4901b8: 0x2631d680  addiu       $s1, $s1, -0x2980
    ctx->pc = 0x4901b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
    // 0x4901bc: 0x8604001c  lh          $a0, 0x1C($s0)
    ctx->pc = 0x4901bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x4901c0: 0x96222218  lhu         $v0, 0x2218($s1)
    ctx->pc = 0x4901c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72F898u));
    // 0x4901c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4901c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4901c8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4901c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4901cc: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4901CCu;
    SET_GPR_U32(ctx, 31, 0x4901D4u);
    ctx->pc = 0x4901D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4901CCu;
    // 0x4901d0: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4901CCu, 0x4901D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4901D4u;
label_4901d4:
    // 0x4901d4: 0x86040022  lh          $a0, 0x22($s0)
    ctx->pc = 0x4901d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x4901d8: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x4901d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4901dc: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x4901dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4901e0: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x4901e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4901e4: 0x9622221a  lhu         $v0, 0x221A($s1)
    ctx->pc = 0x4901e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8730)));
    // 0x4901e8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4901e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4901ec: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4901ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4901f0: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4901F0u;
    SET_GPR_U32(ctx, 31, 0x4901F8u);
    ctx->pc = 0x4901F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4901F0u;
    // 0x4901f4: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4901F0u, 0x4901F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4901F8u;
label_4901f8:
    // 0x4901f8: 0x8604002c  lh          $a0, 0x2C($s0)
    ctx->pc = 0x4901f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x4901fc: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x4901fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x490200: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x490200u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x490204: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x490204u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x490208: 0x9622221c  lhu         $v0, 0x221C($s1)
    ctx->pc = 0x490208u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8732)));
    // 0x49020c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x49020cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x490210: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x490210u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x490214: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x490214u;
    SET_GPR_U32(ctx, 31, 0x49021Cu);
    ctx->pc = 0x490218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490214u;
    // 0x490218: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x490214u, 0x49021Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49021Cu;
label_49021c:
    // 0x49021c: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x49021cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x490220: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x490220u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x490224: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x490224u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x490228: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x490228u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49022c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49022cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x490230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490234: 0x3e00008  jr          $ra
    ctx->pc = 0x490234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x490238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490234u;
        // 0x490238: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x490234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49023Cu;
    // 0x49023c: 0x0  nop
    ctx->pc = 0x49023cu;
    // NOP
    ctx->pc = 0x490240u;
}
