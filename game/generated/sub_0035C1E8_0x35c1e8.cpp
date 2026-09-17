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

// Function: sub_0035C1E8
// Address: 0x35c1e8 - 0x35c3b8
void sub_0035C1E8_0x35c1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C1E8_0x35c1e8");
#endif

    switch (ctx->pc) {
        case 0x35c23cu: goto label_35c23c;
        case 0x35c348u: goto label_35c348;
        case 0x35c35cu: goto label_35c35c;
        case 0x35c378u: goto label_35c378;
        case 0x35c390u: goto label_35c390;
        default: break;
    }

    ctx->pc = 0x35c1e8u;

label_35c1e8:
    // 0x35c1e8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x35c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x35c1ec: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x35c1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x35c1f0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x35c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35c1f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35c1f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35c1f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35c1fc: 0x44080  sll         $t0, $a0, 2
    ctx->pc = 0x35c1fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35c200: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x35c200u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35c204: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x35c204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c208: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35c208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35c20c: 0x2c840030  sltiu       $a0, $a0, 0x30
    ctx->pc = 0x35c20cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x35c210: 0x3c09001d  lui         $t1, 0x1D
    ctx->pc = 0x35c210u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)29 << 16));
    // 0x35c214: 0x252927b8  addiu       $t1, $t1, 0x27B8
    ctx->pc = 0x35c214u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 10168));
    // 0x35c218: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x35c218u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x35c21c: 0x3c07001d  lui         $a3, 0x1D
    ctx->pc = 0x35c21cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)29 << 16));
    // 0x35c220: 0x24e71378  addiu       $a3, $a3, 0x1378
    ctx->pc = 0x35c220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4984));
    // 0x35c224: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x35c224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x35c228: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35C228u;
    {
        const bool branch_taken_0x35c228 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C228u;
        // 0x35c22c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c228) {
            ctx->pc = 0x35C248u;
            goto label_35c248;
        }
    }
    ctx->pc = 0x35C230u;
    // 0x35c230: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35c230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35c234: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35C234u;
    SET_GPR_U32(ctx, 31, 0x35C23Cu);
    ctx->pc = 0x35C238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C234u;
    // 0x35c238: 0x24845828  addiu       $a0, $a0, 0x5828 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35C234u, 0x35C23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C23Cu;
label_35c23c:
    // 0x35c23c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x35C23Cu;
    {
        const bool branch_taken_0x35c23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C23Cu;
        // 0x35c240: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c23c) {
            ctx->pc = 0x35C314u;
            goto label_35c314;
        }
    }
    ctx->pc = 0x35C244u;
    // 0x35c244: 0x0  nop
    ctx->pc = 0x35c244u;
    // NOP
label_35c248:
    // 0x35c248: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x35c248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x35c24c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35c24cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35c250: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x35c250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x35c254: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x35c254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35c258: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x35c258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35c25c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x35c25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35c260: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35c260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35c264: 0x280821  addu        $at, $at, $t0
    ctx->pc = 0x35c264u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 8)));
    // 0x35c268: 0xac202ba8  sw          $zero, 0x2BA8($at)
    ctx->pc = 0x35c268u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11176), GPR_U32(ctx, 0));
    // 0x35c26c: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35c26cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35c270: 0x280821  addu        $at, $at, $t0
    ctx->pc = 0x35c270u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 8)));
    // 0x35c274: 0xac202ae8  sw          $zero, 0x2AE8($at)
    ctx->pc = 0x35c274u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10984), GPR_U32(ctx, 0));
    // 0x35c278: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35c278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c27c: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x35c27cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c280: 0xa0e00001  sb          $zero, 0x1($a3)
    ctx->pc = 0x35c280u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c284: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x35c284u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c288: 0xa0e40003  sb          $a0, 0x3($a3)
    ctx->pc = 0x35c288u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x35c28c: 0xa4e50024  sh          $a1, 0x24($a3)
    ctx->pc = 0x35c28cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 36), (uint16_t)GPR_U32(ctx, 5));
    // 0x35c290: 0xa4e30038  sh          $v1, 0x38($a3)
    ctx->pc = 0x35c290u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x35c294: 0xace6003c  sw          $a2, 0x3C($a3)
    ctx->pc = 0x35c294u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 6));
    // 0x35c298: 0xa0e00004  sb          $zero, 0x4($a3)
    ctx->pc = 0x35c298u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c29c: 0xa0e00005  sb          $zero, 0x5($a3)
    ctx->pc = 0x35c29cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c2a0: 0xa0e00006  sb          $zero, 0x6($a3)
    ctx->pc = 0x35c2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c2a4: 0xa0e00007  sb          $zero, 0x7($a3)
    ctx->pc = 0x35c2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c2a8: 0xa0e00008  sb          $zero, 0x8($a3)
    ctx->pc = 0x35c2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c2ac: 0xa0e00009  sb          $zero, 0x9($a3)
    ctx->pc = 0x35c2acu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c2b0: 0xa0e0000a  sb          $zero, 0xA($a3)
    ctx->pc = 0x35c2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c2b4: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x35c2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x35c2b8: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x35c2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x35c2bc: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x35c2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x35c2c0: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x35c2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x35c2c4: 0xa4e3001c  sh          $v1, 0x1C($a3)
    ctx->pc = 0x35c2c4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x35c2c8: 0xa4e0001e  sh          $zero, 0x1E($a3)
    ctx->pc = 0x35c2c8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x35c2cc: 0xa4e00028  sh          $zero, 0x28($a3)
    ctx->pc = 0x35c2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x35c2d0: 0xa4e0002a  sh          $zero, 0x2A($a3)
    ctx->pc = 0x35c2d0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x35c2d4: 0xa4e3002c  sh          $v1, 0x2C($a3)
    ctx->pc = 0x35c2d4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x35c2d8: 0xa4e0002e  sh          $zero, 0x2E($a3)
    ctx->pc = 0x35c2d8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 46), (uint16_t)GPR_U32(ctx, 0));
    // 0x35c2dc: 0xa4e00030  sh          $zero, 0x30($a3)
    ctx->pc = 0x35c2dcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x35c2e0: 0xa4e00032  sh          $zero, 0x32($a3)
    ctx->pc = 0x35c2e0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 50), (uint16_t)GPR_U32(ctx, 0));
    // 0x35c2e4: 0xa4e00034  sh          $zero, 0x34($a3)
    ctx->pc = 0x35c2e4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x35c2e8: 0xa4e00036  sh          $zero, 0x36($a3)
    ctx->pc = 0x35c2e8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 54), (uint16_t)GPR_U32(ctx, 0));
    // 0x35c2ec: 0xa4e00040  sh          $zero, 0x40($a3)
    ctx->pc = 0x35c2ecu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 64), (uint16_t)GPR_U32(ctx, 0));
    // 0x35c2f0: 0xa4e00042  sh          $zero, 0x42($a3)
    ctx->pc = 0x35c2f0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 66), (uint16_t)GPR_U32(ctx, 0));
    // 0x35c2f4: 0xace00044  sw          $zero, 0x44($a3)
    ctx->pc = 0x35c2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 0));
    // 0x35c2f8: 0xace00020  sw          $zero, 0x20($a3)
    ctx->pc = 0x35c2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
    // 0x35c2fc: 0xace00050  sw          $zero, 0x50($a3)
    ctx->pc = 0x35c2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 0));
    // 0x35c300: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x35c300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x35c304: 0xa120000c  sb          $zero, 0xC($t1)
    ctx->pc = 0x35c304u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c308: 0xa0e00026  sb          $zero, 0x26($a3)
    ctx->pc = 0x35c308u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 38), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c30c: 0xa5200004  sh          $zero, 0x4($t1)
    ctx->pc = 0x35c30cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x35c310: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x35c310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_35c314:
    // 0x35c314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c318: 0x3e00008  jr          $ra
    ctx->pc = 0x35C318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C318u;
        // 0x35c31c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C320u;
    // 0x35c320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35c320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35c324: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35c324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35c328: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35c328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35c32c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35c32cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c330: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35c330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35c334: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35c334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c338: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35c338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35c33c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35c33cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c340: 0x2111007  srav        $v0, $s1, $s0
    ctx->pc = 0x35c340u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
    // 0x35c344: 0x0  nop
    ctx->pc = 0x35c344u;
    // NOP
label_35c348:
    // 0x35c348: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35c348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35c34c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x35C34Cu;
    {
        const bool branch_taken_0x35c34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c34c) {
            ctx->pc = 0x35C350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C34Cu;
            // 0x35c350: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C360u;
            goto label_35c360;
        }
    }
    ctx->pc = 0x35C354u;
    // 0x35c354: 0xc0d707a  jal         func_35C1E8
    ctx->pc = 0x35C354u;
    SET_GPR_U32(ctx, 31, 0x35C35Cu);
    ctx->pc = 0x35C358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C354u;
    // 0x35c358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C1E8u;
    goto label_35c1e8;
    ctx->pc = 0x35C35Cu;
label_35c35c:
    // 0x35c35c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35c35cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_35c360:
    // 0x35c360: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x35c360u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x35c364: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x35C364u;
    {
        const bool branch_taken_0x35c364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C364u;
        // 0x35c368: 0x2111007  srav        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c364) {
            ctx->pc = 0x35C348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c348;
        }
    }
    ctx->pc = 0x35C36Cu;
    // 0x35c36c: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x35c36cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x35c370: 0x2602ffe8  addiu       $v0, $s0, -0x18
    ctx->pc = 0x35c370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
    // 0x35c374: 0x0  nop
    ctx->pc = 0x35c374u;
    // NOP
label_35c378:
    // 0x35c378: 0x521007  srav        $v0, $s2, $v0
    ctx->pc = 0x35c378u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x35c37c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35c37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35c380: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x35C380u;
    {
        const bool branch_taken_0x35c380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c380) {
            ctx->pc = 0x35C384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C380u;
            // 0x35c384: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C394u;
            goto label_35c394;
        }
    }
    ctx->pc = 0x35C388u;
    // 0x35c388: 0xc0d707a  jal         func_35C1E8
    ctx->pc = 0x35C388u;
    SET_GPR_U32(ctx, 31, 0x35C390u);
    ctx->pc = 0x35C38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C388u;
    // 0x35c38c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C1E8u;
    goto label_35c1e8;
    ctx->pc = 0x35C390u;
label_35c390:
    // 0x35c390: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35c390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_35c394:
    // 0x35c394: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x35c394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x35c398: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x35C398u;
    {
        const bool branch_taken_0x35c398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c398) {
            ctx->pc = 0x35C39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C398u;
            // 0x35c39c: 0x2602ffe8  addiu       $v0, $s0, -0x18 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c378;
        }
    }
    ctx->pc = 0x35C3A0u;
    // 0x35c3a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35c3a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c3a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35c3a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35c3a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35c3a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c3ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35c3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x35C3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C3B0u;
        // 0x35c3b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C3B8u;
}
