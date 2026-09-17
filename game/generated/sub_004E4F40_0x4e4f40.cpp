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

// Function: sub_004E4F40
// Address: 0x4e4f40 - 0x4e5308
void sub_004E4F40_0x4e4f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4F40_0x4e4f40");
#endif

    switch (ctx->pc) {
        case 0x4e5070u: goto label_4e5070;
        case 0x4e5090u: goto label_4e5090;
        case 0x4e5118u: goto label_4e5118;
        case 0x4e518cu: goto label_4e518c;
        case 0x4e519cu: goto label_4e519c;
        case 0x4e51b4u: goto label_4e51b4;
        case 0x4e51dcu: goto label_4e51dc;
        case 0x4e51e4u: goto label_4e51e4;
        default: break;
    }

    ctx->pc = 0x4e4f40u;

    // 0x4e4f40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e4f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4e4f44: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e4f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e4f48: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4e4f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4e4f4c: 0x245611b8  addiu       $s6, $v0, 0x11B8
    ctx->pc = 0x4e4f4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4536));
    // 0x4e4f50: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4e4f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4e4f54: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x4e4f54u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
    // 0x4e4f58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e4f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e4f5c: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4e4f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4e4f60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e4f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e4f64: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x4e4f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x4e4f68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e4f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4e4f6c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4e4f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4e4f70: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4e4f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4e4f74: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4e4f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4e4f78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4e4f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4e4f7c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4e4f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11B8u));
    // 0x4e4f80: 0x84a22300  lh          $v0, 0x2300($a1)
    ctx->pc = 0x4e4f80u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72F980u));
    // 0x4e4f84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e4f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e4f88: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4e4f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4e4f8c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e4f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e4f90: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4e4f90u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4e4f94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e4f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e4f98: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4e4f98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e4f9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4e4f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4e4fa0: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4e4fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4e4fa4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e4fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e4fa8: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4e4fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4e4fac: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4e4facu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e4fb0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4E4FB0u;
    {
        const bool branch_taken_0x4e4fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4FB0u;
        // 0x4e4fb4: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4fb0) {
            ctx->pc = 0x4E4FE8u;
            goto label_4e4fe8;
        }
    }
    ctx->pc = 0x4E4FB8u;
    // 0x4e4fb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e4fb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4fbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e4fbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e4fc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e4fc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e4fc4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e4fc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e4fc8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e4fc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e4fcc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e4fccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e4fd0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e4fd0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e4fd4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4e4fd4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e4fd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e4fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e4fdc: 0x81398a8  j           func_4E62A0
    ctx->pc = 0x4E4FDCu;
    ctx->pc = 0x4E4FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4FDCu;
    // 0x4e4fe0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E62A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E62A0u, 0x4E4FDCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E4FE4u;
    // 0x4e4fe4: 0x0  nop
    ctx->pc = 0x4e4fe4u;
    // NOP
label_4e4fe8:
    // 0x4e4fe8: 0x84a223f8  lh          $v0, 0x23F8($a1)
    ctx->pc = 0x4e4fe8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 9208)));
    // 0x4e4fec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e4fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e4ff0: 0x85060160  lh          $a2, 0x160($t0)
    ctx->pc = 0x4e4ff0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 352)));
    // 0x4e4ff4: 0x1d73825  or          $a3, $t6, $s7
    ctx->pc = 0x4e4ff4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 14) | GPR_U64(ctx, 23));
    // 0x4e4ff8: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4e4ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4e4ffc: 0x9505015e  lhu         $a1, 0x15E($t0)
    ctx->pc = 0x4e4ffcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 350)));
    // 0x4e5000: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e5000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e5004: 0xd73025  or          $a2, $a2, $s7
    ctx->pc = 0x4e5004u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 23));
    // 0x4e5008: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4e5008u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4e500c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e500cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e5010: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4e5010u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4e5014: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4e5014u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4e5018: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4e5018u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e501c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e501cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e5020: 0xe57024  and         $t6, $a3, $a1
    ctx->pc = 0x4e5020u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x4e5024: 0x265211c0  addiu       $s2, $s2, 0x11C0
    ctx->pc = 0x4e5024u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4544));
    // 0x4e5028: 0x3042001c  andi        $v0, $v0, 0x1C
    ctx->pc = 0x4e5028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)28);
    // 0x4e502c: 0x35c5ffff  ori         $a1, $t6, 0xFFFF
    ctx->pc = 0x4e502cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x4e5030: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4e5030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4e5034: 0xa67024  and         $t6, $a1, $a2
    ctx->pc = 0x4e5034u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4e5038: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e5038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e503c: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4e503cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4e5040: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4e5040u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4e5044: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4e5044u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4e5048: 0x263111c8  addiu       $s1, $s1, 0x11C8
    ctx->pc = 0x4e5048u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4552));
    // 0x4e504c: 0x267311c4  addiu       $s3, $s3, 0x11C4
    ctx->pc = 0x4e504cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4548));
    // 0x4e5050: 0x96d00000  lhu         $s0, 0x0($s6)
    ctx->pc = 0x4e5050u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e5054: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4e5054u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4e5058: 0x26b511cc  addiu       $s5, $s5, 0x11CC
    ctx->pc = 0x4e5058u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4556));
    // 0x4e505c: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x4e505cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4e5060: 0x108443  sra         $s0, $s0, 17
    ctx->pc = 0x4e5060u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 17));
    // 0x4e5064: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x4e5064u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x4e5068: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4E5068u;
    SET_GPR_U32(ctx, 31, 0x4E5070u);
    ctx->pc = 0x4E506Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5068u;
    // 0x4e506c: 0x1d08021  addu        $s0, $t6, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4E5068u, 0x4E5070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5070u;
label_4e5070:
    // 0x4e5070: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4e5070u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5074: 0x24020081  addiu       $v0, $zero, 0x81
    ctx->pc = 0x4e5074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x4e5078: 0xa6820008  sh          $v0, 0x8($s4)
    ctx->pc = 0x4e5078u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e507c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4e507cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e5080: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4e5080u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4e5084: 0x261011bc  addiu       $s0, $s0, 0x11BC
    ctx->pc = 0x4e5084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4540));
    // 0x4e5088: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4E5088u;
    SET_GPR_U32(ctx, 31, 0x4E5090u);
    ctx->pc = 0x4E508Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5088u;
    // 0x4e508c: 0xa683000c  sh          $v1, 0xC($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4E5088u, 0x4E5090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5090u;
label_4e5090:
    // 0x4e5090: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4e5090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e5094: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4e5094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4e5098: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x4e5098u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e509c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e509cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e50a0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4e50a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4e50a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e50a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e50a8: 0x34840500  ori         $a0, $a0, 0x500
    ctx->pc = 0x4e50a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1280);
    // 0x4e50ac: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4e50acu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4e50b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e50b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e50b4: 0xf73824  and         $a3, $a3, $s7
    ctx->pc = 0x4e50b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 23));
    // 0x4e50b8: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4e50b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e50bc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4e50bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e50c0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x4e50c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x4e50c4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4e50c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e50c8: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4e50c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4e50cc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e50ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e50d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e50d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e50d4: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4e50d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4e50d8: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4e50d8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4e50dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e50dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e50e0: 0xd73024  and         $a2, $a2, $s7
    ctx->pc = 0x4e50e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 23));
    // 0x4e50e4: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4e50e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e50e8: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4e50e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4e50ec: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x4e50ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x4e50f0: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4e50f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4e50f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e50f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e50f8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x4e50f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4e50fc: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4e50fcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4e5100: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x4e5100u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x4e5104: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x4e5104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x4e5108: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x4e5108u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x4e510c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4e510cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x4e5110: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4E5110u;
    SET_GPR_U32(ctx, 31, 0x4E5118u);
    ctx->pc = 0x4E5114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5110u;
    // 0x4e5114: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4E5110u, 0x4E5118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5118u;
label_4e5118:
    // 0x4e5118: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4e5118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e511c: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4e511cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4e5120: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4e5120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e5124: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e5124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e5128: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e5128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e512c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4e512cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4e5130: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e5130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e5134: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4e5134u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e5138: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x4e5138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x4e513c: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4e513cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4e5140: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e5140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e5144: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4e5144u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4e5148: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e5148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e514c: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4e514cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e5150: 0x2442e000  addiu       $v0, $v0, -0x2000
    ctx->pc = 0x4e5150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
    // 0x4e5154: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4e5154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4e5158: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e5158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e515c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4e515cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4e5160: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e5160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e5164: 0x84a20022  lh          $v0, 0x22($a1)
    ctx->pc = 0x4e5164u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x4e5168: 0x86c40000  lh          $a0, 0x0($s6)
    ctx->pc = 0x4e5168u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e516c: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x4e516cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x4e5170: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e5170u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e5174: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4e5174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4e5178: 0x972025  or          $a0, $a0, $s7
    ctx->pc = 0x4e5178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 23));
    // 0x4e517c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4e517cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4e5180: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4e5180u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4e5184: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4E5184u;
    SET_GPR_U32(ctx, 31, 0x4E518Cu);
    ctx->pc = 0x4E5188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5184u;
    // 0x4e5188: 0x86c40000  lh          $a0, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4E5184u, 0x4E518Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E518Cu;
label_4e518c:
    // 0x4e518c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4e518cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5190: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x4e5190u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x4e5194: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E5194u;
    SET_GPR_U32(ctx, 31, 0x4E519Cu);
    ctx->pc = 0x4E5198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5194u;
    // 0x4e5198: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E5194u, 0x4E519Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E519Cu;
label_4e519c:
    // 0x4e519c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e519cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e51a0: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4e51a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e51a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e51a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e51a8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4e51a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4e51ac: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E51ACu;
    SET_GPR_U32(ctx, 31, 0x4E51B4u);
    ctx->pc = 0x4E51B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E51ACu;
    // 0x4e51b0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E51ACu, 0x4E51B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E51B4u;
label_4e51b4:
    // 0x4e51b4: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4e51b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e51b8: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4e51b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e51bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e51bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e51c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4e51c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e51c4: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x4e51c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4e51c8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e51c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e51cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4e51ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4e51d0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4e51d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4e51d4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E51D4u;
    SET_GPR_U32(ctx, 31, 0x4E51DCu);
    ctx->pc = 0x4E51D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E51D4u;
    // 0x4e51d8: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E51D4u, 0x4E51DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E51DCu;
label_4e51dc:
    // 0x4e51dc: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E51DCu;
    SET_GPR_U32(ctx, 31, 0x4E51E4u);
    ctx->pc = 0x4E51E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E51DCu;
    // 0x4e51e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E51DCu, 0x4E51E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E51E4u;
label_4e51e4:
    // 0x4e51e4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4e51e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e51e8: 0x8ea90000  lw          $t1, 0x0($s5)
    ctx->pc = 0x4e51e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e51ec: 0x268a0010  addiu       $t2, $s4, 0x10
    ctx->pc = 0x4e51ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x4e51f0: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4e51f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e51f4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e51f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e51f8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4e51f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e51fc: 0x268b0014  addiu       $t3, $s4, 0x14
    ctx->pc = 0x4e51fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x4e5200: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x4e5200u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e5204: 0x268c0018  addiu       $t4, $s4, 0x18
    ctx->pc = 0x4e5204u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x4e5208: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x4e5208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x4e520c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4e520cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e5210: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e5210u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e5214: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x4e5214u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e5218: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4e5218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e521c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4e521cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e5220: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x4e5220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x4e5224: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e5224u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e5228: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4e5228u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4e522c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4e522cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4e5230: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4e5230u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4e5234: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x4e5234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4e5238: 0x240ec000  addiu       $t6, $zero, -0x4000
    ctx->pc = 0x4e5238u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x4e523c: 0x340dfffd  ori         $t5, $zero, 0xFFFD
    ctx->pc = 0x4e523cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x4e5240: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x4e5240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x4e5244: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4e5244u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e5248: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x4e5248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x4e524c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e524cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e5250: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e5250u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e5254: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4e5254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4e5258: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4e5258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4e525c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e525cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e5260: 0xf73825  or          $a3, $a3, $s7
    ctx->pc = 0x4e5260u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 23));
    // 0x4e5264: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e5264u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e5268: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4e5268u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4e526c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e526cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e5270: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4e5270u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4e5274: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e5274u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e5278: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x4e5278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x4e527c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e527cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e5280: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x4e5280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x4e5284: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e5284u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e5288: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4e5288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4e528c: 0x1174025  or          $t0, $t0, $s7
    ctx->pc = 0x4e528cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 23));
    // 0x4e5290: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x4e5290u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x4e5294: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4e5294u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4e5298: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4e5298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4e529c: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4e529cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4e52a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e52a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e52a4: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4e52a4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4e52a8: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4e52a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e52ac: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4e52acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4e52b0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4e52b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4e52b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e52b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e52b8: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4e52b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4e52bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e52bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e52c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e52c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e52c4: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4e52c4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4e52c8: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4e52c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e52cc: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4e52ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4e52d0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4e52d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4e52d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e52d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e52d8: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4e52d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4e52dc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4e52dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e52e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e52e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e52e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e52e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e52e8: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4e52e8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x4e52ec: 0xa684015e  sh          $a0, 0x15E($s4)
    ctx->pc = 0x4e52ecu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 350), (uint16_t)GPR_U32(ctx, 4));
    // 0x4e52f0: 0xa68e0160  sh          $t6, 0x160($s4)
    ctx->pc = 0x4e52f0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 352), (uint16_t)GPR_U32(ctx, 14));
    // 0x4e52f4: 0xa68d0162  sh          $t5, 0x162($s4)
    ctx->pc = 0x4e52f4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 354), (uint16_t)GPR_U32(ctx, 13));
    // 0x4e52f8: 0xa6800164  sh          $zero, 0x164($s4)
    ctx->pc = 0x4e52f8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 356), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e52fc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e52fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e5300: 0x3e00008  jr          $ra
    ctx->pc = 0x4E5300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E5304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5300u;
        // 0x4e5304: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E5300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E5308u;
}
