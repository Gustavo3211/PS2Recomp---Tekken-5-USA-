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

// Function: sub_004CBFC8
// Address: 0x4cbfc8 - 0x4cc378
void sub_004CBFC8_0x4cbfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CBFC8_0x4cbfc8");
#endif

    switch (ctx->pc) {
        case 0x4cbfe0u: goto label_4cbfe0;
        case 0x4cc000u: goto label_4cc000;
        case 0x4cc008u: goto label_4cc008;
        case 0x4cc134u: goto label_4cc134;
        case 0x4cc158u: goto label_4cc158;
        case 0x4cc330u: goto label_4cc330;
        case 0x4cc340u: goto label_4cc340;
        case 0x4cc350u: goto label_4cc350;
        case 0x4cc360u: goto label_4cc360;
        default: break;
    }

    ctx->pc = 0x4cbfc8u;

    // 0x4cbfc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4cbfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4cbfcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cbfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cbfd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4cbfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4cbfd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4cbfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4cbfd8: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4CBFD8u;
    SET_GPR_U32(ctx, 31, 0x4CBFE0u);
    ctx->pc = 0x4CBFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBFD8u;
    // 0x4cbfdc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4CBFD8u, 0x4CBFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CBFE0u;
label_4cbfe0:
    // 0x4cbfe0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4cbfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4cbfe4: 0x263001b4  addiu       $s0, $s1, 0x1B4
    ctx->pc = 0x4cbfe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 436));
    // 0x4cbfe8: 0xac620f80  sw          $v0, 0xF80($v1)
    ctx->pc = 0x4cbfe8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0F80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0F80u, _value); } while (0);
    // 0x4cbfec: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4cbfecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cbff0: 0x442005d  bltzl       $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x4CBFF0u;
    {
        const bool branch_taken_0x4cbff0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4cbff0) {
            ctx->pc = 0x4CBFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CBFF0u;
            // 0x4cbff4: 0x8e380140  lw          $t8, 0x140($s1) (Delay Slot)
            SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CC168u;
            goto label_4cc168;
        }
    }
    ctx->pc = 0x4CBFF8u;
    // 0x4cbff8: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4CBFF8u;
    SET_GPR_U32(ctx, 31, 0x4CC000u);
    ctx->pc = 0x4CBFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBFF8u;
    // 0x4cbffc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4CBFF8u, 0x4CC000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC000u;
label_4cc000:
    // 0x4cc000: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4CC000u;
    SET_GPR_U32(ctx, 31, 0x4CC008u);
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4CC000u, 0x4CC008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC008u;
label_4cc008:
    // 0x4cc008: 0x96230012  lhu         $v1, 0x12($s1)
    ctx->pc = 0x4cc008u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x4cc00c: 0x2409047f  addiu       $t1, $zero, 0x47F
    ctx->pc = 0x4cc00cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1151));
    // 0x4cc010: 0x96240016  lhu         $a0, 0x16($s1)
    ctx->pc = 0x4cc010u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x4cc014: 0x240a00b6  addiu       $t2, $zero, 0xB6
    ctx->pc = 0x4cc014u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
    // 0x4cc018: 0x9627001a  lhu         $a3, 0x1A($s1)
    ctx->pc = 0x4cc018u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x4cc01c: 0x240b0111  addiu       $t3, $zero, 0x111
    ctx->pc = 0x4cc01cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x4cc020: 0xa622015e  sh          $v0, 0x15E($s1)
    ctx->pc = 0x4cc020u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cc024: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4cc024u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4cc028: 0xa6240132  sh          $a0, 0x132($s1)
    ctx->pc = 0x4cc028u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 306), (uint16_t)GPR_U32(ctx, 4));
    // 0x4cc02c: 0x24c60f60  addiu       $a2, $a2, 0xF60
    ctx->pc = 0x4cc02cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3936));
    // 0x4cc030: 0xa6270134  sh          $a3, 0x134($s1)
    ctx->pc = 0x4cc030u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 308), (uint16_t)GPR_U32(ctx, 7));
    // 0x4cc034: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4cc034u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4cc038: 0xa629000c  sh          $t1, 0xC($s1)
    ctx->pc = 0x4cc038u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 9));
    // 0x4cc03c: 0x26290120  addiu       $t1, $s1, 0x120
    ctx->pc = 0x4cc03cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x4cc040: 0xa62a0136  sh          $t2, 0x136($s1)
    ctx->pc = 0x4cc040u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 310), (uint16_t)GPR_U32(ctx, 10));
    // 0x4cc044: 0x262a012c  addiu       $t2, $s1, 0x12C
    ctx->pc = 0x4cc044u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 300));
    // 0x4cc048: 0xa6230130  sh          $v1, 0x130($s1)
    ctx->pc = 0x4cc048u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 304), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cc04c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4cc04cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4cc050: 0xa62b0138  sh          $t3, 0x138($s1)
    ctx->pc = 0x4cc050u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 312), (uint16_t)GPR_U32(ctx, 11));
    // 0x4cc054: 0x24a50f84  addiu       $a1, $a1, 0xF84
    ctx->pc = 0x4cc054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3972));
    // 0x4cc058: 0x862201be  lh          $v0, 0x1BE($s1)
    ctx->pc = 0x4cc058u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
    // 0x4cc05c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4cc05cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F60u));
    // 0x4cc060: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4cc060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4cc064: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cc064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cc068: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cc068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cc06c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4cc06cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4cc070: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cc070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cc074: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4cc074u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cc078: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4cc078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4cc07c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4cc07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4cc080: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cc080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cc084: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4cc084u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4cc088: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4cc088u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cc08c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cc08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cc090: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4cc090u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4cc094: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4cc094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4cc098: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4cc098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4cc09c: 0x242172b0  addiu       $at, $at, 0x72B0
    ctx->pc = 0x4cc09cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 29360));
    // 0x4cc0a0: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4cc0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4cc0a4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4cc0a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cc0a8: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x4cc0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cc0ac: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4cc0acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4cc0b0: 0xa6230118  sh          $v1, 0x118($s1)
    ctx->pc = 0x4cc0b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cc0b4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4cc0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4cc0b8: 0xa620011c  sh          $zero, 0x11C($s1)
    ctx->pc = 0x4cc0b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cc0bc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4cc0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cc0c0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4cc0c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cc0c4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4cc0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cc0c8: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x4cc0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cc0cc: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x4cc0ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4cc0d0: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x4cc0d0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cc0d4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4cc0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4cc0d8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4cc0d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cc0dc: 0xa6230160  sh          $v1, 0x160($s1)
    ctx->pc = 0x4cc0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 352), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cc0e0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4cc0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4cc0e4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4cc0e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cc0e8: 0xa6220162  sh          $v0, 0x162($s1)
    ctx->pc = 0x4cc0e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 354), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cc0ec: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x4cc0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x4cc0f0: 0xa620002e  sh          $zero, 0x2E($s1)
    ctx->pc = 0x4cc0f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cc0f4: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4cc0f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4cc0f8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4cc0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4cc0fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cc0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cc100: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4cc100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4cc104: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4cc104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4cc108: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cc108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cc10c: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4cc10cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4cc110: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4cc110u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cc114: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4cc114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4cc118: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4cc118u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cc11c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4cc11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cc120: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cc120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cc124: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4cc124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4cc128: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4cc128u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4cc12c: 0xc12b638  jal         func_4AD8E0
    ctx->pc = 0x4CC12Cu;
    SET_GPR_U32(ctx, 31, 0x4CC134u);
    ctx->pc = 0x4CC130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC12Cu;
    // 0x4cc130: 0x84c40000  lh          $a0, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8E0u, 0x4CC12Cu, 0x4CC134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC134u;
label_4cc134:
    // 0x4cc134: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CC134u;
    {
        const bool branch_taken_0x4cc134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CC138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC134u;
        // 0x4cc138: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc134) {
            ctx->pc = 0x4CC150u;
            goto label_4cc150;
        }
    }
    ctx->pc = 0x4CC13Cu;
    // 0x4cc13c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4cc13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc140: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cc140u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cc144: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cc144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cc148: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4CC148u;
    ctx->pc = 0x4CC14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC148u;
    // 0x4cc14c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4CC150u;
label_4cc150:
    // 0x4cc150: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4CC150u;
    SET_GPR_U32(ctx, 31, 0x4CC158u);
    ctx->pc = 0x4CC154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC150u;
    // 0x4cc154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4CC150u, 0x4CC158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC158u;
label_4cc158:
    // 0x4cc158: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x4cc158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x4cc15c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4cc15cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cc160: 0xac510140  sw          $s1, 0x140($v0)
    ctx->pc = 0x4cc160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 17));
    // 0x4cc164: 0x8e380140  lw          $t8, 0x140($s1)
    ctx->pc = 0x4cc164u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
label_4cc168:
    // 0x4cc168: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4cc168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4cc16c: 0xac580f78  sw          $t8, 0xF78($v0)
    ctx->pc = 0x4cc16cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 24)); ps2TraceGuestWrite(rdram, 0x7F0F78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0F78u, _value); } while (0);
    // 0x4cc170: 0x870301b4  lh          $v1, 0x1B4($t8)
    ctx->pc = 0x4cc170u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 436)));
    // 0x4cc174: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CC174u;
    {
        const bool branch_taken_0x4cc174 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4CC178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC174u;
        // 0x4cc178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc174) {
            ctx->pc = 0x4CC190u;
            goto label_4cc190;
        }
    }
    ctx->pc = 0x4CC17Cu;
    // 0x4cc17c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cc17cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cc180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cc180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cc184: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cc184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cc188: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4CC188u;
    ctx->pc = 0x4CC18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC188u;
    // 0x4cc18c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4CC190u;
label_4cc190:
    // 0x4cc190: 0x87020160  lh          $v0, 0x160($t8)
    ctx->pc = 0x4cc190u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 352)));
    // 0x4cc194: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4CC194u;
    {
        const bool branch_taken_0x4cc194 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4CC198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC194u;
        // 0x4cc198: 0x3c08007f  lui         $t0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc194) {
            ctx->pc = 0x4CC1B8u;
            goto label_4cc1b8;
        }
    }
    ctx->pc = 0x4CC19Cu;
    // 0x4cc19c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4cc19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc1a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cc1a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cc1a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cc1a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cc1a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cc1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cc1ac: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4CC1ACu;
    ctx->pc = 0x4CC1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC1ACu;
    // 0x4cc1b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4CC1B4u;
    // 0x4cc1b4: 0x0  nop
    ctx->pc = 0x4cc1b4u;
    // NOP
label_4cc1b8:
    // 0x4cc1b8: 0x86220130  lh          $v0, 0x130($s1)
    ctx->pc = 0x4cc1b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x4cc1bc: 0x25080f6c  addiu       $t0, $t0, 0xF6C
    ctx->pc = 0x4cc1bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3948));
    // 0x4cc1c0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4cc1c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4cc1c4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4cc1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cc1c8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4cc1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4cc1cc: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4cc1ccu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4cc1d0: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4cc1d0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4cc1d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cc1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cc1d8: 0x256b0f70  addiu       $t3, $t3, 0xF70
    ctx->pc = 0x4cc1d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3952));
    // 0x4cc1dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cc1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cc1e0: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x4cc1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4cc1e4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4cc1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4cc1e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cc1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cc1ec: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cc1ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cc1f0: 0x258c0f74  addiu       $t4, $t4, 0xF74
    ctx->pc = 0x4cc1f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 3956));
    // 0x4cc1f4: 0x86220132  lh          $v0, 0x132($s1)
    ctx->pc = 0x4cc1f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 306)));
    // 0x4cc1f8: 0x262d0010  addiu       $t5, $s1, 0x10
    ctx->pc = 0x4cc1f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4cc1fc: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x4cc1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4cc200: 0x262e0014  addiu       $t6, $s1, 0x14
    ctx->pc = 0x4cc200u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x4cc204: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4cc204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4cc208: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4cc208u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cc20c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4cc20cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4cc210: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cc210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4cc214: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4cc214u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4cc218: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cc218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cc21c: 0x262f0018  addiu       $t7, $s1, 0x18
    ctx->pc = 0x4cc21cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x4cc220: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x4cc220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4cc224: 0x86220134  lh          $v0, 0x134($s1)
    ctx->pc = 0x4cc224u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x4cc228: 0x85670000  lh          $a3, 0x0($t3)
    ctx->pc = 0x4cc228u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4cc22c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4cc22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4cc230: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4cc230u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4cc234: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4cc234u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4cc238: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cc238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4cc23c: 0x8f020010  lw          $v0, 0x10($t8)
    ctx->pc = 0x4cc23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x4cc240: 0x858a0000  lh          $t2, 0x0($t4)
    ctx->pc = 0x4cc240u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4cc244: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4cc244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4cc248: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cc248u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cc24c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4cc24cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4cc250: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4cc250u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4cc254: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4cc254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4cc258: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4cc258u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4cc25c: 0x8f020014  lw          $v0, 0x14($t8)
    ctx->pc = 0x4cc25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x4cc260: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4cc260u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cc264: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4cc264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4cc268: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cc268u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cc26c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4cc26cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4cc270: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4cc270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4cc274: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cc274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cc278: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x4cc278u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x4cc27c: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4cc27cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4cc280: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4cc280u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4cc284: 0x8f020018  lw          $v0, 0x18($t8)
    ctx->pc = 0x4cc284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 24)));
    // 0x4cc288: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4cc288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4cc28c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cc28cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cc290: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x4cc290u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4cc294: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x4cc294u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x4cc298: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x4cc298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x4cc29c: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4cc29cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4cc2a0: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x4cc2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4cc2a4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4cc2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4cc2a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cc2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cc2ac: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x4cc2acu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x4cc2b0: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x4cc2b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4cc2b4: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x4cc2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4cc2b8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4cc2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4cc2bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cc2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cc2c0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4cc2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4cc2c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cc2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cc2c8: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x4cc2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x4cc2cc: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4cc2ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4cc2d0: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x4cc2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4cc2d4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4cc2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4cc2d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cc2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cc2dc: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4cc2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4cc2e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cc2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cc2e4: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x4cc2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x4cc2e8: 0x862301bc  lh          $v1, 0x1BC($s1)
    ctx->pc = 0x4cc2e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x4cc2ec: 0x10700012  beq         $v1, $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4CC2ECu;
    {
        const bool branch_taken_0x4cc2ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x4CC2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC2ECu;
        // 0x4cc2f0: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc2ec) {
            ctx->pc = 0x4CC338u;
            goto label_4cc338;
        }
    }
    ctx->pc = 0x4CC2F4u;
    // 0x4cc2f4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CC2F4u;
    {
        const bool branch_taken_0x4cc2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc2f4) {
            ctx->pc = 0x4CC2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CC2F4u;
            // 0x4cc2f8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CC310u;
            goto label_4cc310;
        }
    }
    ctx->pc = 0x4CC2FCu;
    // 0x4cc2fc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4CC2FCu;
    {
        const bool branch_taken_0x4cc2fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC2FCu;
        // 0x4cc300: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc2fc) {
            ctx->pc = 0x4CC328u;
            goto label_4cc328;
        }
    }
    ctx->pc = 0x4CC304u;
    // 0x4cc304: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4CC304u;
    {
        const bool branch_taken_0x4cc304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC304u;
        // 0x4cc308: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc304) {
            ctx->pc = 0x4CC368u;
            goto label_4cc368;
        }
    }
    ctx->pc = 0x4CC30Cu;
    // 0x4cc30c: 0x0  nop
    ctx->pc = 0x4cc30cu;
    // NOP
label_4cc310:
    // 0x4cc310: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4CC310u;
    {
        const bool branch_taken_0x4cc310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CC314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC310u;
        // 0x4cc314: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc310) {
            ctx->pc = 0x4CC348u;
            goto label_4cc348;
        }
    }
    ctx->pc = 0x4CC318u;
    // 0x4cc318: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4CC318u;
    {
        const bool branch_taken_0x4cc318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CC31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC318u;
        // 0x4cc31c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc318) {
            ctx->pc = 0x4CC358u;
            goto label_4cc358;
        }
    }
    ctx->pc = 0x4CC320u;
    // 0x4cc320: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4CC320u;
    {
        const bool branch_taken_0x4cc320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC320u;
        // 0x4cc324: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc320) {
            ctx->pc = 0x4CC368u;
            goto label_4cc368;
        }
    }
    ctx->pc = 0x4CC328u;
label_4cc328:
    // 0x4cc328: 0xc1330de  jal         func_4CC378
    ctx->pc = 0x4CC328u;
    SET_GPR_U32(ctx, 31, 0x4CC330u);
    ctx->pc = 0x4CC32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC328u;
    // 0x4cc32c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CC378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CC378u, 0x4CC328u, 0x4CC330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC330u;
label_4cc330:
    // 0x4cc330: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4CC330u;
    {
        const bool branch_taken_0x4cc330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC330u;
        // 0x4cc334: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc330) {
            ctx->pc = 0x4CC364u;
            goto label_4cc364;
        }
    }
    ctx->pc = 0x4CC338u;
label_4cc338:
    // 0x4cc338: 0xc133110  jal         func_4CC440
    ctx->pc = 0x4CC338u;
    SET_GPR_U32(ctx, 31, 0x4CC340u);
    ctx->pc = 0x4CC33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC338u;
    // 0x4cc33c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CC440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CC440u, 0x4CC338u, 0x4CC340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC340u;
label_4cc340:
    // 0x4cc340: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4CC340u;
    {
        const bool branch_taken_0x4cc340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC340u;
        // 0x4cc344: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc340) {
            ctx->pc = 0x4CC364u;
            goto label_4cc364;
        }
    }
    ctx->pc = 0x4CC348u;
label_4cc348:
    // 0x4cc348: 0xc1333e2  jal         func_4CCF88
    ctx->pc = 0x4CC348u;
    SET_GPR_U32(ctx, 31, 0x4CC350u);
    ctx->pc = 0x4CC34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC348u;
    // 0x4cc34c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CCF88u, 0x4CC348u, 0x4CC350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC350u;
label_4cc350:
    // 0x4cc350: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4CC350u;
    {
        const bool branch_taken_0x4cc350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC350u;
        // 0x4cc354: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc350) {
            ctx->pc = 0x4CC364u;
            goto label_4cc364;
        }
    }
    ctx->pc = 0x4CC358u;
label_4cc358:
    // 0x4cc358: 0xc133414  jal         func_4CD050
    ctx->pc = 0x4CC358u;
    SET_GPR_U32(ctx, 31, 0x4CC360u);
    ctx->pc = 0x4CC35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC358u;
    // 0x4cc35c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD050u, 0x4CC358u, 0x4CC360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC360u;
label_4cc360:
    // 0x4cc360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cc360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4cc364:
    // 0x4cc364: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cc364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4cc368:
    // 0x4cc368: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cc368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cc36c: 0x3e00008  jr          $ra
    ctx->pc = 0x4CC36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CC370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC36Cu;
        // 0x4cc370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CC36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CC374u;
    // 0x4cc374: 0x0  nop
    ctx->pc = 0x4cc374u;
    // NOP
    ctx->pc = 0x4cc378u;
}
