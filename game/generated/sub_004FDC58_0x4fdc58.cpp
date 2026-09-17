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

// Function: sub_004FDC58
// Address: 0x4fdc58 - 0x4fdf30
void sub_004FDC58_0x4fdc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FDC58_0x4fdc58");
#endif

    switch (ctx->pc) {
        case 0x4fdcacu: goto label_4fdcac;
        case 0x4fddb4u: goto label_4fddb4;
        case 0x4fddc4u: goto label_4fddc4;
        case 0x4fddd4u: goto label_4fddd4;
        case 0x4fdde4u: goto label_4fdde4;
        case 0x4fdec4u: goto label_4fdec4;
        case 0x4fdefcu: goto label_4fdefc;
        case 0x4fdf04u: goto label_4fdf04;
        default: break;
    }

    ctx->pc = 0x4fdc58u;

    // 0x4fdc58: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4fdc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x4fdc5c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4fdc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4fdc60: 0x8c43d6c4  lw          $v1, -0x293C($v0)
    ctx->pc = 0x4fdc60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x72D6C4u));
    // 0x4fdc64: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x4fdc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x4fdc68: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4fdc68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fdc6c: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x4fdc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x4fdc70: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4fdc70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fdc74: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x4fdc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x4fdc78: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4fdc78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fdc7c: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x4fdc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x4fdc80: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4fdc80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fdc84: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x4fdc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x4fdc88: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x4fdc88u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fdc8c: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x4fdc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x4fdc90: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x4fdc90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fdc94: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x4fdc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x4fdc98: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x4fdc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x4fdc9c: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x4fdc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x4fdca0: 0x84750030  lh          $s5, 0x30($v1)
    ctx->pc = 0x4fdca0u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x4fdca4: 0xc13ea1e  jal         func_4FA878
    ctx->pc = 0x4FDCA4u;
    SET_GPR_U32(ctx, 31, 0x4FDCACu);
    ctx->pc = 0x4FDCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FDCA4u;
    // 0x4fdca8: 0x8474002e  lh          $s4, 0x2E($v1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FA878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FA878u, 0x4FDCA4u, 0x4FDCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FDCACu;
label_4fdcac:
    // 0x4fdcac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4fdcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4fdcb0: 0x112023  negu        $a0, $s1
    ctx->pc = 0x4fdcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x4fdcb4: 0x2ac20000  slti        $v0, $s6, 0x0
    ctx->pc = 0x4fdcb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fdcb8: 0xa7b00078  sh          $s0, 0x78($sp)
    ctx->pc = 0x4fdcb8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 120), (uint16_t)GPR_U32(ctx, 16));
    // 0x4fdcbc: 0xa7a3007c  sh          $v1, 0x7C($sp)
    ctx->pc = 0x4fdcbcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 124), (uint16_t)GPR_U32(ctx, 3));
    // 0x4fdcc0: 0x82880b  movn        $s1, $a0, $v0
    ctx->pc = 0x4fdcc0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    // 0x4fdcc4: 0x1a400010  blez        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x4FDCC4u;
    {
        const bool branch_taken_0x4fdcc4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x4FDCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FDCC4u;
        // 0x4fdcc8: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fdcc4) {
            ctx->pc = 0x4FDD08u;
            goto label_4fdd08;
        }
    }
    ctx->pc = 0x4FDCCCu;
    // 0x4fdccc: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x4fdcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x4fdcd0: 0x2405fda8  addiu       $a1, $zero, -0x258
    ctx->pc = 0x4fdcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966696));
    // 0x4fdcd4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4fdcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x4fdcd8: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x4fdcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x4fdcdc: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x4fdcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x4fdce0: 0xa7a30012  sh          $v1, 0x12($sp)
    ctx->pc = 0x4fdce0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x4fdce4: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x4fdce4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x4fdce8: 0xa7a40030  sh          $a0, 0x30($sp)
    ctx->pc = 0x4fdce8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x4fdcec: 0xa7a20032  sh          $v0, 0x32($sp)
    ctx->pc = 0x4fdcecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 50), (uint16_t)GPR_U32(ctx, 2));
    // 0x4fdcf0: 0xa7a50000  sh          $a1, 0x0($sp)
    ctx->pc = 0x4fdcf0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4fdcf4: 0xa7a30002  sh          $v1, 0x2($sp)
    ctx->pc = 0x4fdcf4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x4fdcf8: 0xa7a40010  sh          $a0, 0x10($sp)
    ctx->pc = 0x4fdcf8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x4fdcfc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4FDCFCu;
    {
        const bool branch_taken_0x4fdcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FDD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FDCFCu;
        // 0x4fdd00: 0xa7a20022  sh          $v0, 0x22($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fdcfc) {
            ctx->pc = 0x4FDD3Cu;
            goto label_4fdd3c;
        }
    }
    ctx->pc = 0x4FDD04u;
    // 0x4fdd04: 0x0  nop
    ctx->pc = 0x4fdd04u;
    // NOP
label_4fdd08:
    // 0x4fdd08: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x4fdd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x4fdd0c: 0x2712821  addu        $a1, $s3, $s1
    ctx->pc = 0x4fdd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x4fdd10: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4fdd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x4fdd14: 0x2403fda8  addiu       $v1, $zero, -0x258
    ctx->pc = 0x4fdd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966696));
    // 0x4fdd18: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x4fdd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x4fdd1c: 0xa7a20012  sh          $v0, 0x12($sp)
    ctx->pc = 0x4fdd1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x4fdd20: 0xa7a30020  sh          $v1, 0x20($sp)
    ctx->pc = 0x4fdd20u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x4fdd24: 0xa7a40030  sh          $a0, 0x30($sp)
    ctx->pc = 0x4fdd24u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x4fdd28: 0xa7a50032  sh          $a1, 0x32($sp)
    ctx->pc = 0x4fdd28u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 50), (uint16_t)GPR_U32(ctx, 5));
    // 0x4fdd2c: 0xa7a30000  sh          $v1, 0x0($sp)
    ctx->pc = 0x4fdd2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4fdd30: 0xa7a20002  sh          $v0, 0x2($sp)
    ctx->pc = 0x4fdd30u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x4fdd34: 0xa7a40010  sh          $a0, 0x10($sp)
    ctx->pc = 0x4fdd34u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x4fdd38: 0xa7a50022  sh          $a1, 0x22($sp)
    ctx->pc = 0x4fdd38u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 5));
label_4fdd3c:
    // 0x4fdd3c: 0x6c1001a  bgez        $s6, . + 4 + (0x1A << 2)
    ctx->pc = 0x4FDD3Cu;
    {
        const bool branch_taken_0x4fdd3c = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x4FDD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FDD3Cu;
        // 0x4fdd40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fdd3c) {
            ctx->pc = 0x4FDDA8u;
            goto label_4fdda8;
        }
    }
    ctx->pc = 0x4FDD44u;
    // 0x4fdd44: 0x97a60000  lhu         $a2, 0x0($sp)
    ctx->pc = 0x4fdd44u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fdd48: 0x97a80002  lhu         $t0, 0x2($sp)
    ctx->pc = 0x4fdd48u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x4fdd4c: 0x97a90010  lhu         $t1, 0x10($sp)
    ctx->pc = 0x4fdd4cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4fdd50: 0x63023  negu        $a2, $a2
    ctx->pc = 0x4fdd50u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x4fdd54: 0x97a70012  lhu         $a3, 0x12($sp)
    ctx->pc = 0x4fdd54u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x4fdd58: 0x84023  negu        $t0, $t0
    ctx->pc = 0x4fdd58u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
    // 0x4fdd5c: 0x97a50020  lhu         $a1, 0x20($sp)
    ctx->pc = 0x4fdd5cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4fdd60: 0x94823  negu        $t1, $t1
    ctx->pc = 0x4fdd60u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x4fdd64: 0x97a40022  lhu         $a0, 0x22($sp)
    ctx->pc = 0x4fdd64u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 34)));
    // 0x4fdd68: 0x73823  negu        $a3, $a3
    ctx->pc = 0x4fdd68u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x4fdd6c: 0x97a30030  lhu         $v1, 0x30($sp)
    ctx->pc = 0x4fdd6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4fdd70: 0x52823  negu        $a1, $a1
    ctx->pc = 0x4fdd70u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x4fdd74: 0x97a20032  lhu         $v0, 0x32($sp)
    ctx->pc = 0x4fdd74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 50)));
    // 0x4fdd78: 0x42023  negu        $a0, $a0
    ctx->pc = 0x4fdd78u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x4fdd7c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4fdd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4fdd80: 0xa7a60000  sh          $a2, 0x0($sp)
    ctx->pc = 0x4fdd80u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x4fdd84: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4fdd84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4fdd88: 0xa7a80002  sh          $t0, 0x2($sp)
    ctx->pc = 0x4fdd88u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 8));
    // 0x4fdd8c: 0xa7a90010  sh          $t1, 0x10($sp)
    ctx->pc = 0x4fdd8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 9));
    // 0x4fdd90: 0xa7a70012  sh          $a3, 0x12($sp)
    ctx->pc = 0x4fdd90u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 18), (uint16_t)GPR_U32(ctx, 7));
    // 0x4fdd94: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x4fdd94u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x4fdd98: 0xa7a40022  sh          $a0, 0x22($sp)
    ctx->pc = 0x4fdd98u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 4));
    // 0x4fdd9c: 0xa7a30030  sh          $v1, 0x30($sp)
    ctx->pc = 0x4fdd9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x4fdda0: 0xa7a20032  sh          $v0, 0x32($sp)
    ctx->pc = 0x4fdda0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 50), (uint16_t)GPR_U32(ctx, 2));
    // 0x4fdda4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4fdda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4fdda8:
    // 0x4fdda8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4fdda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fddac: 0xc13fce8  jal         func_4FF3A0
    ctx->pc = 0x4FDDACu;
    SET_GPR_U32(ctx, 31, 0x4FDDB4u);
    ctx->pc = 0x4FDDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FDDACu;
    // 0x4fddb0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FF3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FF3A0u, 0x4FDDACu, 0x4FDDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FDDB4u;
label_4fddb4:
    // 0x4fddb4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4fddb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fddb8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4fddb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4fddbc: 0xc13fce8  jal         func_4FF3A0
    ctx->pc = 0x4FDDBCu;
    SET_GPR_U32(ctx, 31, 0x4FDDC4u);
    ctx->pc = 0x4FDDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FDDBCu;
    // 0x4fddc0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FF3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FF3A0u, 0x4FDDBCu, 0x4FDDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FDDC4u;
label_4fddc4:
    // 0x4fddc4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4fddc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fddc8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4fddc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4fddcc: 0xc13fce8  jal         func_4FF3A0
    ctx->pc = 0x4FDDCCu;
    SET_GPR_U32(ctx, 31, 0x4FDDD4u);
    ctx->pc = 0x4FDDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FDDCCu;
    // 0x4fddd0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FF3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FF3A0u, 0x4FDDCCu, 0x4FDDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FDDD4u;
label_4fddd4:
    // 0x4fddd4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4fddd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fddd8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4fddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4fdddc: 0xc13fce8  jal         func_4FF3A0
    ctx->pc = 0x4FDDDCu;
    SET_GPR_U32(ctx, 31, 0x4FDDE4u);
    ctx->pc = 0x4FDDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FDDDCu;
    // 0x4fdde0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FF3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FF3A0u, 0x4FDDDCu, 0x4FDDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FDDE4u;
label_4fdde4:
    // 0x4fdde4: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4fdde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4fdde8: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x4fdde8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x56CED0u));
    // 0x4fddec: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x4fddecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4fddf0: 0x87a50000  lh          $a1, 0x0($sp)
    ctx->pc = 0x4fddf0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fddf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4fddf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fddf8: 0x87a60010  lh          $a2, 0x10($sp)
    ctx->pc = 0x4fddf8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4fddfc: 0x87a70020  lh          $a3, 0x20($sp)
    ctx->pc = 0x4fddfcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4fde00: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x4fde00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4fde04: 0x87a20030  lh          $v0, 0x30($sp)
    ctx->pc = 0x4fde04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4fde08: 0x70c33018  mult1       $a2, $a2, $v1
    ctx->pc = 0x4fde08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4fde0c: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x4fde0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4fde10: 0x87ae0002  lh          $t6, 0x2($sp)
    ctx->pc = 0x4fde10u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x4fde14: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4fde14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4fde18: 0x87a30032  lh          $v1, 0x32($sp)
    ctx->pc = 0x4fde18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 50)));
    // 0x4fde1c: 0x87af0012  lh          $t7, 0x12($sp)
    ctx->pc = 0x4fde1cu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x4fde20: 0x52a83  sra         $a1, $a1, 10
    ctx->pc = 0x4fde20u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 10));
    // 0x4fde24: 0x87b00022  lh          $s0, 0x22($sp)
    ctx->pc = 0x4fde24u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 34)));
    // 0x4fde28: 0x63283  sra         $a2, $a2, 10
    ctx->pc = 0x4fde28u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 10));
    // 0x4fde2c: 0x73a83  sra         $a3, $a3, 10
    ctx->pc = 0x4fde2cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 10));
    // 0x4fde30: 0x25ce0800  addiu       $t6, $t6, 0x800
    ctx->pc = 0x4fde30u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2048));
    // 0x4fde34: 0x25ef0800  addiu       $t7, $t7, 0x800
    ctx->pc = 0x4fde34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2048));
    // 0x4fde38: 0x24a50800  addiu       $a1, $a1, 0x800
    ctx->pc = 0x4fde38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2048));
    // 0x4fde3c: 0x24c60800  addiu       $a2, $a2, 0x800
    ctx->pc = 0x4fde3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2048));
    // 0x4fde40: 0x24e70800  addiu       $a3, $a3, 0x800
    ctx->pc = 0x4fde40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2048));
    // 0x4fde44: 0x26100800  addiu       $s0, $s0, 0x800
    ctx->pc = 0x4fde44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2048));
    // 0x4fde48: 0xe4c00  sll         $t1, $t6, 16
    ctx->pc = 0x4fde48u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x4fde4c: 0xf5c00  sll         $t3, $t7, 16
    ctx->pc = 0x4fde4cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 15), 16));
    // 0x4fde50: 0x54400  sll         $t0, $a1, 16
    ctx->pc = 0x4fde50u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4fde54: 0x65400  sll         $t2, $a2, 16
    ctx->pc = 0x4fde54u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4fde58: 0x76400  sll         $t4, $a3, 16
    ctx->pc = 0x4fde58u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4fde5c: 0x106c00  sll         $t5, $s0, 16
    ctx->pc = 0x4fde5cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4fde60: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x4fde60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x4fde64: 0x94c03  sra         $t1, $t1, 16
    ctx->pc = 0x4fde64u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
    // 0x4fde68: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x4fde68u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
    // 0x4fde6c: 0xb5c03  sra         $t3, $t3, 16
    ctx->pc = 0x4fde6cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 16));
    // 0x4fde70: 0xc6403  sra         $t4, $t4, 16
    ctx->pc = 0x4fde70u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 16));
    // 0x4fde74: 0xd6c03  sra         $t5, $t5, 16
    ctx->pc = 0x4fde74u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 16));
    // 0x4fde78: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x4fde78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x4fde7c: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x4fde7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x4fde80: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x4fde80u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x4fde84: 0xa7a20030  sh          $v0, 0x30($sp)
    ctx->pc = 0x4fde84u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x4fde88: 0xa7a30032  sh          $v1, 0x32($sp)
    ctx->pc = 0x4fde88u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 50), (uint16_t)GPR_U32(ctx, 3));
    // 0x4fde8c: 0xa7b7007a  sh          $s7, 0x7A($sp)
    ctx->pc = 0x4fde8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 122), (uint16_t)GPR_U32(ctx, 23));
    // 0x4fde90: 0xafa80040  sw          $t0, 0x40($sp)
    ctx->pc = 0x4fde90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 8));
    // 0x4fde94: 0xa7a50000  sh          $a1, 0x0($sp)
    ctx->pc = 0x4fde94u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4fde98: 0xa7a60010  sh          $a2, 0x10($sp)
    ctx->pc = 0x4fde98u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 6));
    // 0x4fde9c: 0xa7a70020  sh          $a3, 0x20($sp)
    ctx->pc = 0x4fde9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 7));
    // 0x4fdea0: 0xa7b00022  sh          $s0, 0x22($sp)
    ctx->pc = 0x4fdea0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 16));
    // 0x4fdea4: 0xafa90044  sw          $t1, 0x44($sp)
    ctx->pc = 0x4fdea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 9));
    // 0x4fdea8: 0xafaa0050  sw          $t2, 0x50($sp)
    ctx->pc = 0x4fdea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 10));
    // 0x4fdeac: 0xafab0054  sw          $t3, 0x54($sp)
    ctx->pc = 0x4fdeacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 11));
    // 0x4fdeb0: 0xafac0060  sw          $t4, 0x60($sp)
    ctx->pc = 0x4fdeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 12));
    // 0x4fdeb4: 0xafad0064  sw          $t5, 0x64($sp)
    ctx->pc = 0x4fdeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 13));
    // 0x4fdeb8: 0xa7ae0002  sh          $t6, 0x2($sp)
    ctx->pc = 0x4fdeb8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 14));
    // 0x4fdebc: 0xc13f652  jal         func_4FD948
    ctx->pc = 0x4FDEBCu;
    SET_GPR_U32(ctx, 31, 0x4FDEC4u);
    ctx->pc = 0x4FDEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FDEBCu;
    // 0x4fdec0: 0xa7af0012  sh          $t7, 0x12($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 18), (uint16_t)GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FD948u, 0x4FDEBCu, 0x4FDEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FDEC4u;
label_4fdec4:
    // 0x4fdec4: 0x87a80030  lh          $t0, 0x30($sp)
    ctx->pc = 0x4fdec4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4fdec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4fdec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fdecc: 0x87a20032  lh          $v0, 0x32($sp)
    ctx->pc = 0x4fdeccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 50)));
    // 0x4fded0: 0x87a30020  lh          $v1, 0x20($sp)
    ctx->pc = 0x4fded0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4fded4: 0x87a50022  lh          $a1, 0x22($sp)
    ctx->pc = 0x4fded4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 34)));
    // 0x4fded8: 0x87a60010  lh          $a2, 0x10($sp)
    ctx->pc = 0x4fded8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4fdedc: 0x87a70012  lh          $a3, 0x12($sp)
    ctx->pc = 0x4fdedcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x4fdee0: 0xafa80040  sw          $t0, 0x40($sp)
    ctx->pc = 0x4fdee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 8));
    // 0x4fdee4: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x4fdee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x4fdee8: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x4fdee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x4fdeec: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x4fdeecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
    // 0x4fdef0: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x4fdef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x4fdef4: 0xc13f652  jal         func_4FD948
    ctx->pc = 0x4FDEF4u;
    SET_GPR_U32(ctx, 31, 0x4FDEFCu);
    ctx->pc = 0x4FDEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FDEF4u;
    // 0x4fdef8: 0xafa70064  sw          $a3, 0x64($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FD948u, 0x4FDEF4u, 0x4FDEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FDEFCu;
label_4fdefc:
    // 0x4fdefc: 0xc13ea58  jal         func_4FA960
    ctx->pc = 0x4FDEFCu;
    SET_GPR_U32(ctx, 31, 0x4FDF04u);
    ctx->pc = 0x4FA960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FA960u, 0x4FDEFCu, 0x4FDF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FDF04u;
label_4fdf04:
    // 0x4fdf04: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x4fdf04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4fdf08: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x4fdf08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x4fdf0c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x4fdf0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4fdf10: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x4fdf10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x4fdf14: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x4fdf14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4fdf18: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x4fdf18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x4fdf1c: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x4fdf1cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4fdf20: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x4fdf20u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x4fdf24: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x4fdf24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4fdf28: 0x3e00008  jr          $ra
    ctx->pc = 0x4FDF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FDF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FDF28u;
        // 0x4fdf2c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FDF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FDF30u;
}
