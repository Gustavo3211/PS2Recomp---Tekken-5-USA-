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

// Function: sub_00509FE8
// Address: 0x509fe8 - 0x50a140
void sub_00509FE8_0x509fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00509FE8_0x509fe8");
#endif

    switch (ctx->pc) {
        case 0x509ffcu: goto label_509ffc;
        default: break;
    }

    ctx->pc = 0x509fe8u;

    // 0x509fe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x509fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x509fec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x509fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x509ff0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x509ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x509ff4: 0xc144ac0  jal         func_512B00
    ctx->pc = 0x509FF4u;
    SET_GPR_U32(ctx, 31, 0x509FFCu);
    ctx->pc = 0x509FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x509FF4u;
    // 0x509ff8: 0x48400  sll         $s0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512B00u, 0x509FF4u, 0x509FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x509FFCu;
label_509ffc:
    // 0x509ffc: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x509ffcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x50a000: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x50a000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50a004: 0x108500  sll         $s0, $s0, 20
    ctx->pc = 0x50a004u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 20));
    // 0x50a008: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x50a008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x50a00c: 0xa4a20008  sh          $v0, 0x8($a1)
    ctx->pc = 0x50a00cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x50a010: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50a010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50a014: 0x1083c3  sra         $s0, $s0, 15
    ctx->pc = 0x50a014u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 15));
    // 0x50a018: 0x244bc5f2  addiu       $t3, $v0, -0x3A0E
    ctx->pc = 0x50a018u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952434));
    // 0x50a01c: 0x3c010057  lui         $at, 0x57
    ctx->pc = 0x50a01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)87 << 16));
    // 0x50a020: 0x24217d00  addiu       $at, $at, 0x7D00
    ctx->pc = 0x50a020u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 32000));
    // 0x50a024: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x50a024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x50a028: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x50a028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x50a02c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x50a02cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50a030: 0x248cc5f0  addiu       $t4, $a0, -0x3A10
    ctx->pc = 0x50a030u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952432));
    // 0x50a034: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x50a034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50a038: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x50a038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50a03c: 0xa4a30074  sh          $v1, 0x74($a1)
    ctx->pc = 0x50a03cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 116), (uint16_t)GPR_U32(ctx, 3));
    // 0x50a040: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x50a040u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x50a044: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x50a044u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50a048: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x50a048u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x50a04c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x50a04cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50a050: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50a050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50a054: 0xa4a30072  sh          $v1, 0x72($a1)
    ctx->pc = 0x50a054u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 114), (uint16_t)GPR_U32(ctx, 3));
    // 0x50a058: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50a058u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50a05c: 0xa4a20084  sh          $v0, 0x84($a1)
    ctx->pc = 0x50a05cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 132), (uint16_t)GPR_U32(ctx, 2));
    // 0x50a060: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x50a060u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50a064: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50a064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50a068: 0xa4a30082  sh          $v1, 0x82($a1)
    ctx->pc = 0x50a068u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 130), (uint16_t)GPR_U32(ctx, 3));
    // 0x50a06c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50a06cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50a070: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50a070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50a074: 0xa4a20076  sh          $v0, 0x76($a1)
    ctx->pc = 0x50a074u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 118), (uint16_t)GPR_U32(ctx, 2));
    // 0x50a078: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x50a078u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50a07c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50a07cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50a080: 0xa4a30086  sh          $v1, 0x86($a1)
    ctx->pc = 0x50a080u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 134), (uint16_t)GPR_U32(ctx, 3));
    // 0x50a084: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50a084u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50a088: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50a088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50a08c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x50a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50a090: 0x4600002  bltz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x50A090u;
    {
        const bool branch_taken_0x50a090 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x50A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A090u;
        // 0x50a094: 0xa482c5f0  sh          $v0, -0x3A10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4294952432), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a090) {
            ctx->pc = 0x50A09Cu;
            goto label_50a09c;
        }
    }
    ctx->pc = 0x50A098u;
    // 0x50a098: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x50a098u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50a09c:
    // 0x50a09c: 0xa5280000  sh          $t0, 0x0($t1)
    ctx->pc = 0x50a09cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x50a0a0: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x50a0a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50a0a4: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x50a0a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50a0a8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x50a0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x50a0ac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x50a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x50a0b0: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x50a0b0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50a0b4: 0xa4a20078  sh          $v0, 0x78($a1)
    ctx->pc = 0x50a0b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 120), (uint16_t)GPR_U32(ctx, 2));
    // 0x50a0b8: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x50a0b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50a0bc: 0xa4a3007a  sh          $v1, 0x7A($a1)
    ctx->pc = 0x50a0bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 122), (uint16_t)GPR_U32(ctx, 3));
    // 0x50a0c0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50a0c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50a0c4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50a0c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50a0c8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x50a0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50a0cc: 0x4600002  bltz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x50A0CCu;
    {
        const bool branch_taken_0x50a0cc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x50A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A0CCu;
        // 0x50a0d0: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a0cc) {
            ctx->pc = 0x50A0D8u;
            goto label_50a0d8;
        }
    }
    ctx->pc = 0x50A0D4u;
    // 0x50a0d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x50a0d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50a0d8:
    // 0x50a0d8: 0xa4ca0000  sh          $t2, 0x0($a2)
    ctx->pc = 0x50a0d8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x50a0dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x50a0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50a0e0: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x50a0e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x50a0e4: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x50a0e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x50a0e8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x50a0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x50a0ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x50a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x50a0f0: 0xa5820000  sh          $v0, 0x0($t4)
    ctx->pc = 0x50a0f0u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50a0f4: 0xa4a20088  sh          $v0, 0x88($a1)
    ctx->pc = 0x50a0f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 2));
    // 0x50a0f8: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x50a0f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x50a0fc: 0xa4a3008a  sh          $v1, 0x8A($a1)
    ctx->pc = 0x50a0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 3));
    // 0x50a100: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50a100u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50a104: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50a104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50a108: 0xa4a2007c  sh          $v0, 0x7C($a1)
    ctx->pc = 0x50a108u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 124), (uint16_t)GPR_U32(ctx, 2));
    // 0x50a10c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x50a10cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50a110: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50a110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50a114: 0xa4a3008c  sh          $v1, 0x8C($a1)
    ctx->pc = 0x50a114u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 140), (uint16_t)GPR_U32(ctx, 3));
    // 0x50a118: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x50a118u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50a11c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50a11cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50a120: 0xa4a40080  sh          $a0, 0x80($a1)
    ctx->pc = 0x50a120u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 128), (uint16_t)GPR_U32(ctx, 4));
    // 0x50a124: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50a124u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50a128: 0xa4a20090  sh          $v0, 0x90($a1)
    ctx->pc = 0x50a128u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x50a12c: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x50a12cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x50a130: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50a130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50a134: 0xa4a30092  sh          $v1, 0x92($a1)
    ctx->pc = 0x50a134u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 146), (uint16_t)GPR_U32(ctx, 3));
    // 0x50a138: 0x3e00008  jr          $ra
    ctx->pc = 0x50A138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A138u;
        // 0x50a13c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50A138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50A140u;
}
