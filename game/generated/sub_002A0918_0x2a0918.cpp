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

// Function: sub_002A0918
// Address: 0x2a0918 - 0x2a0ce0
void sub_002A0918_0x2a0918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0918_0x2a0918");
#endif

    switch (ctx->pc) {
        case 0x2a0990u: goto label_2a0990;
        case 0x2a0a40u: goto label_2a0a40;
        case 0x2a0b64u: goto label_2a0b64;
        case 0x2a0b84u: goto label_2a0b84;
        case 0x2a0be0u: goto label_2a0be0;
        case 0x2a0bf0u: goto label_2a0bf0;
        case 0x2a0c08u: goto label_2a0c08;
        case 0x2a0c20u: goto label_2a0c20;
        case 0x2a0c70u: goto label_2a0c70;
        default: break;
    }

    ctx->pc = 0x2a0918u;

    // 0x2a0918: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2a0918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2a091c: 0x24850158  addiu       $a1, $a0, 0x158
    ctx->pc = 0x2a091cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 344));
    // 0x2a0920: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x2a0920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x2a0924: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x2a0924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x2a0928: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x2a0928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x2a092c: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x2a092cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x2a0930: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x2a0930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x2a0934: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x2a0934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x2a0938: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x2a0938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x2a093c: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x2a093cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x2a0940: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x2a0940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x2a0944: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x2a0944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x2a0948: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x2a0948u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2a094c: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2a094cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2a0950: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2a0950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a0954: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A0954u;
    {
        const bool branch_taken_0x2a0954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0954u;
        // 0x2a0958: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0954) {
            ctx->pc = 0x2A096Cu;
            goto label_2a096c;
        }
    }
    ctx->pc = 0x2A095Cu;
    // 0x2a095c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a095cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a0960: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2a0960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a0964: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A0964u;
    {
        const bool branch_taken_0x2a0964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a0964) {
            ctx->pc = 0x2A0968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0964u;
            // 0x2a0968: 0x8c9e016c  lw          $fp, 0x16C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 364)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A097Cu;
            goto label_2a097c;
        }
    }
    ctx->pc = 0x2A096Cu;
label_2a096c:
    // 0x2a096c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2a096cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2a0970: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2a0970u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0974: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2a0974u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2a0978: 0x8c9e016c  lw          $fp, 0x16C($a0)
    ctx->pc = 0x2a0978u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 364)));
label_2a097c:
    // 0x2a097c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2a097cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2a0980: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a0980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a0984: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x2a0984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x2a0988: 0x3c01c2a0  lui         $at, 0xC2A0
    ctx->pc = 0x2a0988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49824 << 16));
    // 0x2a098c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2a098cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2a0990:
    // 0x2a0990: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a0990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0994: 0x29880  sll         $s3, $v0, 2
    ctx->pc = 0x2a0994u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a0998: 0x2771021  addu        $v0, $s3, $s7
    ctx->pc = 0x2a0998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x2a099c: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x2a099cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2a09a0: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x2a09a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x2a09a4: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A09A4u;
    {
        const bool branch_taken_0x2a09a4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2A09A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A09A4u;
        // 0x2a09a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a09a4) {
            ctx->pc = 0x2A09B0u;
            goto label_2a09b0;
        }
    }
    ctx->pc = 0x2A09ACu;
    // 0x2a09ac: 0x8c4400b8  lw          $a0, 0xB8($v0)
    ctx->pc = 0x2a09acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
label_2a09b0:
    // 0x2a09b0: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a09b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a09b4: 0x2771821  addu        $v1, $s3, $s7
    ctx->pc = 0x2a09b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x2a09b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a09b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a09bc: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x2a09bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a09c0: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x2a09c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x2a09c4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2a09c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a09c8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A09C8u;
    {
        const bool branch_taken_0x2a09c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A09CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A09C8u;
        // 0x2a09cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a09c8) {
            ctx->pc = 0x2A09D4u;
            goto label_2a09d4;
        }
    }
    ctx->pc = 0x2A09D0u;
    // 0x2a09d0: 0x8c6400bc  lw          $a0, 0xBC($v1)
    ctx->pc = 0x2a09d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_2a09d4:
    // 0x2a09d4: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x2a09d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x2a09d8: 0x2771821  addu        $v1, $s3, $s7
    ctx->pc = 0x2a09d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x2a09dc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2a09dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a09e0: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x2a09e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a09e4: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x2a09e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x2a09e8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2a09e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a09ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A09ECu;
    {
        const bool branch_taken_0x2a09ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A09F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A09ECu;
        // 0x2a09f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a09ec) {
            ctx->pc = 0x2A09F8u;
            goto label_2a09f8;
        }
    }
    ctx->pc = 0x2A09F4u;
    // 0x2a09f4: 0x8c6400c0  lw          $a0, 0xC0($v1)
    ctx->pc = 0x2a09f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_2a09f8:
    // 0x2a09f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2a09f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2a09fc: 0x2771821  addu        $v1, $s3, $s7
    ctx->pc = 0x2a09fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x2a0a00: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a0a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a0a04: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x2a0a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a0a08: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x2a0a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x2a0a0c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2a0a0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a0a10: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A0A10u;
    {
        const bool branch_taken_0x2a0a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0A10u;
        // 0x2a0a14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0a10) {
            ctx->pc = 0x2A0A1Cu;
            goto label_2a0a1c;
        }
    }
    ctx->pc = 0x2A0A18u;
    // 0x2a0a18: 0x8c6400c4  lw          $a0, 0xC4($v1)
    ctx->pc = 0x2a0a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_2a0a1c:
    // 0x2a0a1c: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x2a0a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x2a0a20: 0x8fc2006c  lw          $v0, 0x6C($fp)
    ctx->pc = 0x2a0a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 108)));
    // 0x2a0a24: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A0A24u;
    {
        const bool branch_taken_0x2a0a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0A24u;
        // 0x2a0a28: 0x2771021  addu        $v0, $s3, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0a24) {
            ctx->pc = 0x2A0A40u;
            goto label_2a0a40;
        }
    }
    ctx->pc = 0x2A0A2Cu;
    // 0x2a0a2c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2a0a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2a0a30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a0a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0a34: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x2a0a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2a0a38: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2A0A38u;
    SET_GPR_U32(ctx, 31, 0x2A0A40u);
    ctx->pc = 0x2A0A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0A38u;
    // 0x2a0a3c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2A0A38u, 0x2A0A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0A40u;
label_2a0a40:
    // 0x2a0a40: 0xc7c00068  lwc1        $f0, 0x68($fp)
    ctx->pc = 0x2a0a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0a44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a0a44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a0a48: 0xc7819078  lwc1        $f1, -0x6F88($gp)
    ctx->pc = 0x2a0a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0a4c: 0xc782907c  lwc1        $f2, -0x6F84($gp)
    ctx->pc = 0x2a0a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a0a50: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2a0a50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2a0a54: 0x3c014320  lui         $at, 0x4320
    ctx->pc = 0x2a0a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17184 << 16));
    // 0x2a0a58: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2a0a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a0a5c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2a0a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2a0a60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a0a60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a0a64: 0x8cc3cec8  lw          $v1, -0x3138($a2)
    ctx->pc = 0x2a0a64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3BCEC8u));
    // 0x2a0a68: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2a0a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2a0a6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a0a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a0a70: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a0a70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a0a74: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x2a0a74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2a0a78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A0A78u;
    {
        const bool branch_taken_0x2a0a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0A78u;
        // 0x2a0a7c: 0x46151040  add.s       $f1, $f2, $f21 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0a78) {
            ctx->pc = 0x2A0A90u;
            goto label_2a0a90;
        }
    }
    ctx->pc = 0x2A0A80u;
    // 0x2a0a80: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2a0a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2a0a84: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a0a84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a0a88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A0A88u;
    {
        const bool branch_taken_0x2a0a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0A88u;
        // 0x2a0a8c: 0xe4540008  swc1        $f20, 0x8($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0a88) {
            ctx->pc = 0x2A0A94u;
            goto label_2a0a94;
        }
    }
    ctx->pc = 0x2A0A90u;
label_2a0a90:
    // 0x2a0a90: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x2a0a90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_2a0a94:
    // 0x2a0a94: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2a0a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2a0a98: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a0a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a0a9c: 0x8c43cec8  lw          $v1, -0x3138($v0)
    ctx->pc = 0x2a0a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3BCEC8u));
    // 0x2a0aa0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2a0aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2a0aa4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a0aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a0aa8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A0AA8u;
    {
        const bool branch_taken_0x2a0aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0AA8u;
        // 0x2a0aac: 0x46151040  add.s       $f1, $f2, $f21 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0aa8) {
            ctx->pc = 0x2A0AC0u;
            goto label_2a0ac0;
        }
    }
    ctx->pc = 0x2A0AB0u;
    // 0x2a0ab0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2a0ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2a0ab4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a0ab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a0ab8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A0AB8u;
    {
        const bool branch_taken_0x2a0ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0AB8u;
        // 0x2a0abc: 0xe4540008  swc1        $f20, 0x8($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0ab8) {
            ctx->pc = 0x2A0AC4u;
            goto label_2a0ac4;
        }
    }
    ctx->pc = 0x2A0AC0u;
label_2a0ac0:
    // 0x2a0ac0: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x2a0ac0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_2a0ac4:
    // 0x2a0ac4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2a0ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2a0ac8: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2a0ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2a0acc: 0x24a5cec8  addiu       $a1, $a1, -0x3138
    ctx->pc = 0x2a0accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954696));
    // 0x2a0ad0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2a0ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2a0ad4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2a0ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2a0ad8: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2a0ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3BCEE4u));
    // 0x2a0adc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a0adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a0ae0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0AE0u;
    {
        const bool branch_taken_0x2a0ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0ae0) {
            ctx->pc = 0x2A0AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0AE0u;
            // 0x2a0ae4: 0xe4800034  swc1        $f0, 0x34($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0AF4u;
            goto label_2a0af4;
        }
    }
    ctx->pc = 0x2A0AE8u;
    // 0x2a0ae8: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x2a0ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2a0aec: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2a0aecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2a0af0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2a0af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2a0af4:
    // 0x2a0af4: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2a0af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2a0af8: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2a0af8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2a0afc: 0x24c6cec8  addiu       $a2, $a2, -0x3138
    ctx->pc = 0x2a0afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954696));
    // 0x2a0b00: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2a0b00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2a0b04: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2a0b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2a0b08: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x2a0b08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3BCEE4u));
    // 0x2a0b0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a0b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a0b10: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0B10u;
    {
        const bool branch_taken_0x2a0b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0b10) {
            ctx->pc = 0x2A0B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0B10u;
            // 0x2a0b14: 0xe4800034  swc1        $f0, 0x34($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0B24u;
            goto label_2a0b24;
        }
    }
    ctx->pc = 0x2A0B18u;
    // 0x2a0b18: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x2a0b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2a0b1c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2a0b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a0b20: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2a0b20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2a0b24:
    // 0x2a0b24: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2a0b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0b28: 0x2771021  addu        $v0, $s3, $s7
    ctx->pc = 0x2a0b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x2a0b2c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2a0b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b30: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x2a0b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2a0b34: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a0b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b38: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x2a0b38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x2a0b3c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a0b3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b40: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a0b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a0b44: 0x24c53f50  addiu       $a1, $a2, 0x3F50
    ctx->pc = 0x2a0b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16208));
    // 0x2a0b48: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2a0b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a0b4c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a0b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a0b50: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a0b50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b54: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a0b54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2a0b58: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2a0b58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a0b5c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2A0B5Cu;
    SET_GPR_U32(ctx, 31, 0x2A0B64u);
    ctx->pc = 0x2A0B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0B5Cu;
    // 0x2a0b60: 0x2416000a  addiu       $s6, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2A0B5Cu, 0x2A0B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B64u;
label_2a0b64:
    // 0x2a0b64: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x2a0b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2a0b68: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2a0b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0b6c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2a0b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a0b70: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2a0b70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b78: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a0b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a0b7c: 0xc0cc3c8  jal         func_330F20
    ctx->pc = 0x2A0B7Cu;
    SET_GPR_U32(ctx, 31, 0x2A0B84u);
    ctx->pc = 0x2A0B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0B7Cu;
    // 0x2a0b80: 0xa3a00060  sb          $zero, 0x60($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330F20u, 0x2A0B7Cu, 0x2A0B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B84u;
label_2a0b84:
    // 0x2a0b84: 0x3c0780ff  lui         $a3, 0x80FF
    ctx->pc = 0x2a0b84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33023 << 16));
    // 0x2a0b88: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2a0b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0b8c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2a0b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2a0b90: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2a0b90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2a0b94: 0x24a5cb0c  addiu       $a1, $a1, -0x34F4
    ctx->pc = 0x2a0b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953740));
    // 0x2a0b98: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x2a0b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2a0b9c: 0x24c6cb08  addiu       $a2, $a2, -0x34F8
    ctx->pc = 0x2a0b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953736));
    // 0x2a0ba0: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x2a0ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x2a0ba4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2a0ba4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2a0ba8: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x2a0ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a0bac: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2a0bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2a0bb0: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x2a0bb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a0bb4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2a0bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2a0bb8: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x2a0bb8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a0bbc: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2a0bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a0bc0: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a0bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a0bc4: 0x2464cbd0  addiu       $a0, $v1, -0x3430
    ctx->pc = 0x2a0bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953936));
    // 0x2a0bc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a0bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0bcc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a0bccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0bd0: 0x240b006e  addiu       $t3, $zero, 0x6E
    ctx->pc = 0x2a0bd0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2a0bd4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2a0bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2a0bd8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A0BD8u;
    SET_GPR_U32(ctx, 31, 0x2A0BE0u);
    ctx->pc = 0x2A0BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0BD8u;
    // 0x2a0bdc: 0xa7a00040  sh          $zero, 0x40($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A0BD8u, 0x2A0BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0BE0u;
label_2a0be0:
    // 0x2a0be0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a0be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a0be4: 0x8fc60068  lw          $a2, 0x68($fp)
    ctx->pc = 0x2a0be4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 104)));
    // 0x2a0be8: 0x2455cb08  addiu       $s5, $v0, -0x34F8
    ctx->pc = 0x2a0be8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953736));
    // 0x2a0bec: 0xd6001a  div         $zero, $a2, $s6
    ctx->pc = 0x2a0becu;
    { int32_t divisor = GPR_S32(ctx, 22);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2a0bf0:
    // 0x2a0bf0: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x2a0bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x2a0bf4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a0bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0bf8: 0x3010  mfhi        $a2
    ctx->pc = 0x2a0bf8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2a0bfc: 0x8012  mflo        $s0
    ctx->pc = 0x2a0bfcu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x2a0c00: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2A0C00u;
    SET_GPR_U32(ctx, 31, 0x2A0C08u);
    ctx->pc = 0x2A0C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0C00u;
    // 0x2a0c04: 0x24453f58  addiu       $a1, $v0, 0x3F58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2A0C00u, 0x2A0C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0C08u;
label_2a0c08:
    // 0x2a0c08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a0c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0c0c: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x2a0c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2a0c10: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2a0c10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0c14: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a0c14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a0c18: 0xc0cc3c8  jal         func_330F20
    ctx->pc = 0x2A0C18u;
    SET_GPR_U32(ctx, 31, 0x2A0C20u);
    ctx->pc = 0x2A0C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0C18u;
    // 0x2a0c1c: 0xa3a00060  sb          $zero, 0x60($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330F20u, 0x2A0C18u, 0x2A0C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0C20u;
label_2a0c20:
    // 0x2a0c20: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x2a0c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x2a0c24: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2a0c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2a0c28: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2a0c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a0c2c: 0x2484cb0c  addiu       $a0, $a0, -0x34F4
    ctx->pc = 0x2a0c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953740));
    // 0x2a0c30: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a0c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a0c34: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2a0c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a0c38: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x2a0c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x2a0c3c: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x2a0c3cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a0c40: 0x3c0780ff  lui         $a3, 0x80FF
    ctx->pc = 0x2a0c40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33023 << 16));
    // 0x2a0c44: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x2a0c44u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a0c48: 0x24a4cbd0  addiu       $a0, $a1, -0x3430
    ctx->pc = 0x2a0c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953936));
    // 0x2a0c4c: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a0c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a0c50: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2a0c50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2a0c54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a0c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0c58: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a0c58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0c5c: 0x240b006e  addiu       $t3, $zero, 0x6E
    ctx->pc = 0x2a0c5cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2a0c60: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2a0c60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2a0c64: 0xa7a00040  sh          $zero, 0x40($sp)
    ctx->pc = 0x2a0c64u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a0c68: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A0C68u;
    SET_GPR_U32(ctx, 31, 0x2A0C70u);
    ctx->pc = 0x2A0C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0C68u;
    // 0x2a0c6c: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A0C68u, 0x2A0C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0C70u;
label_2a0c70:
    // 0x2a0c70: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A0C70u;
    {
        const bool branch_taken_0x2a0c70 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2A0C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0C70u;
        // 0x2a0c74: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0c70) {
            ctx->pc = 0x2A0C8Cu;
            goto label_2a0c8c;
        }
    }
    ctx->pc = 0x2A0C78u;
    // 0x2a0c78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a0c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a0c7c: 0x5222ffdc  beql        $s1, $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2A0C7Cu;
    {
        const bool branch_taken_0x2a0c7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a0c7c) {
            ctx->pc = 0x2A0C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0C7Cu;
            // 0x2a0c80: 0xd6001a  div         $zero, $a2, $s6 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 22);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0bf0;
        }
    }
    ctx->pc = 0x2A0C84u;
    // 0x2a0c84: 0x5600ffda  bnel        $s0, $zero, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2A0C84u;
    {
        const bool branch_taken_0x2a0c84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0c84) {
            ctx->pc = 0x2A0C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0C84u;
            // 0x2a0c88: 0xd6001a  div         $zero, $a2, $s6 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 22);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0bf0;
        }
    }
    ctx->pc = 0x2A0C8Cu;
label_2a0c8c:
    // 0x2a0c8c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2a0c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0c90: 0x27de0070  addiu       $fp, $fp, 0x70
    ctx->pc = 0x2a0c90u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
    // 0x2a0c94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a0c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a0c98: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2a0c98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a0c9c: 0x1440ff3c  bnez        $v0, . + 4 + (-0xC4 << 2)
    ctx->pc = 0x2A0C9Cu;
    {
        const bool branch_taken_0x2a0c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0C9Cu;
        // 0x2a0ca0: 0xafa30070  sw          $v1, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0c9c) {
            ctx->pc = 0x2A0990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0990;
        }
    }
    ctx->pc = 0x2A0CA4u;
    // 0x2a0ca4: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x2a0ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a0ca8: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x2a0ca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2a0cac: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x2a0cacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a0cb0: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x2a0cb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2a0cb4: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x2a0cb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a0cb8: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x2a0cb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a0cbc: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x2a0cbcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a0cc0: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x2a0cc0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2a0cc4: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x2a0cc4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a0cc8: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x2a0cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a0ccc: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x2a0cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a0cd0: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2a0cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a0cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0CD4u;
        // 0x2a0cd8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0CDCu;
    // 0x2a0cdc: 0x0  nop
    ctx->pc = 0x2a0cdcu;
    // NOP
    ctx->pc = 0x2a0ce0u;
}
