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

// Function: sub_0029F400
// Address: 0x29f400 - 0x29f910
void sub_0029F400_0x29f400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F400_0x29f400");
#endif

    switch (ctx->pc) {
        case 0x29f4c8u: goto label_29f4c8;
        case 0x29f4dcu: goto label_29f4dc;
        case 0x29f650u: goto label_29f650;
        case 0x29f670u: goto label_29f670;
        case 0x29f6b0u: goto label_29f6b0;
        case 0x29f6d0u: goto label_29f6d0;
        case 0x29f738u: goto label_29f738;
        case 0x29f758u: goto label_29f758;
        case 0x29f7acu: goto label_29f7ac;
        case 0x29f7fcu: goto label_29f7fc;
        case 0x29f80cu: goto label_29f80c;
        case 0x29f81cu: goto label_29f81c;
        case 0x29f834u: goto label_29f834;
        case 0x29f848u: goto label_29f848;
        case 0x29f85cu: goto label_29f85c;
        case 0x29f870u: goto label_29f870;
        case 0x29f898u: goto label_29f898;
        case 0x29f8b4u: goto label_29f8b4;
        default: break;
    }

    ctx->pc = 0x29f400u;

    // 0x29f400: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x29f400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x29f404: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x29f404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x29f408: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x29f408u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f40c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x29f40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x29f410: 0x26c40158  addiu       $a0, $s6, 0x158
    ctx->pc = 0x29f410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 344));
    // 0x29f414: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x29f414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x29f418: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29f418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29f41c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x29f41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x29f420: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29f420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29f424: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x29f424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x29f428: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x29f428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x29f42c: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x29f42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x29f430: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x29f430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x29f434: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x29f434u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x29f438: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x29f438u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x29f43c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29f440: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29F440u;
    {
        const bool branch_taken_0x29f440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F440u;
        // 0x29f444: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f440) {
            ctx->pc = 0x29F458u;
            goto label_29f458;
        }
    }
    ctx->pc = 0x29F448u;
    // 0x29f448: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x29f448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x29f44c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x29f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29f450: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29F450u;
    {
        const bool branch_taken_0x29f450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29f450) {
            ctx->pc = 0x29F454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F450u;
            // 0x29f454: 0x8e250060  lw          $a1, 0x60($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F468u;
            goto label_29f468;
        }
    }
    ctx->pc = 0x29F458u;
label_29f458:
    // 0x29f458: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x29f458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x29f45c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29f45cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f460: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x29f460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x29f464: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x29f464u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x60u));
label_29f468:
    // 0x29f468: 0x2406efff  addiu       $a2, $zero, -0x1001
    ctx->pc = 0x29f468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29f46c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29f46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x29f470: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x29f470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x29f474: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x29f474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x29f478: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x29f478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x29f47c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x29f47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x29f480: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x29f480u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
    // 0x29f484: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x29f484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x29f488: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x29f488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x29f48c: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x29f48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x29f490: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x29f490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29f494: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29f494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29f498: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x29f498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x29f49c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29f49cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29f4a0: 0x8e250064  lw          $a1, 0x64($s1)
    ctx->pc = 0x29f4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x29f4a4: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x29f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x29f4a8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x29f4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x29f4ac: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x29f4acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
    // 0x29f4b0: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x29f4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x29f4b4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x29f4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29f4b8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29f4bc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x29f4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x29f4c0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29f4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29f4c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29f4c8:
    // 0x29f4c8: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x29F4C8u;
    {
        const bool branch_taken_0x29f4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f4c8) {
            ctx->pc = 0x29F4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F4C8u;
            // 0x29f4cc: 0x8ed30170  lw          $s3, 0x170($s6) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F4D4u;
            goto label_29f4d4;
        }
    }
    ctx->pc = 0x29F4D0u;
    // 0x29f4d0: 0x8ed3016c  lw          $s3, 0x16C($s6)
    ctx->pc = 0x29f4d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 364)));
label_29f4d4:
    // 0x29f4d4: 0xc0b4728  jal         func_2D1CA0
    ctx->pc = 0x29F4D4u;
    SET_GPR_U32(ctx, 31, 0x29F4DCu);
    ctx->pc = 0x29F4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F4D4u;
    // 0x29f4d8: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1CA0u, 0x29F4D4u, 0x29F4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F4DCu;
label_29f4dc:
    // 0x29f4dc: 0x104000f7  beqz        $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x29F4DCu;
    {
        const bool branch_taken_0x29f4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F4DCu;
        // 0x29f4e0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f4dc) {
            ctx->pc = 0x29F8BCu;
            goto label_29f8bc;
        }
    }
    ctx->pc = 0x29F4E4u;
    // 0x29f4e4: 0x82630020  lb          $v1, 0x20($s3)
    ctx->pc = 0x29f4e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x29f4e8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29F4E8u;
    {
        const bool branch_taken_0x29f4e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29F4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F4E8u;
        // 0x29f4ec: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f4e8) {
            ctx->pc = 0x29F500u;
            goto label_29f500;
        }
    }
    ctx->pc = 0x29F4F0u;
    // 0x29f4f0: 0x8e340064  lw          $s4, 0x64($s1)
    ctx->pc = 0x29f4f0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x29f4f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29F4F4u;
    {
        const bool branch_taken_0x29f4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F4F4u;
        // 0x29f4f8: 0x8e350074  lw          $s5, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f4f4) {
            ctx->pc = 0x29F51Cu;
            goto label_29f51c;
        }
    }
    ctx->pc = 0x29F4FCu;
    // 0x29f4fc: 0x0  nop
    ctx->pc = 0x29f4fcu;
    // NOP
label_29f500:
    // 0x29f500: 0x54600002  bnel        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x29F500u;
    {
        const bool branch_taken_0x29f500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f500) {
            ctx->pc = 0x29F504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F500u;
            // 0x29f504: 0x8e34005c  lw          $s4, 0x5C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F50Cu;
            goto label_29f50c;
        }
    }
    ctx->pc = 0x29F508u;
    // 0x29f508: 0x8e340058  lw          $s4, 0x58($s1)
    ctx->pc = 0x29f508u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_29f50c:
    // 0x29f50c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29f50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29f510: 0x54800002  bnel        $a0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x29F510u;
    {
        const bool branch_taken_0x29f510 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f510) {
            ctx->pc = 0x29F514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F510u;
            // 0x29f514: 0x8e35006c  lw          $s5, 0x6C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F51Cu;
            goto label_29f51c;
        }
    }
    ctx->pc = 0x29F518u;
    // 0x29f518: 0x8e350068  lw          $s5, 0x68($s1)
    ctx->pc = 0x29f518u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_29f51c:
    // 0x29f51c: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x29f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x29f520: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x29f520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29f524: 0x24050b0c  addiu       $a1, $zero, 0xB0C
    ctx->pc = 0x29f524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2828));
    // 0x29f528: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29f528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29f52c: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x29f52cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
    // 0x29f530: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x29f530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x29f534: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29f534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29f538: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29f538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29f53c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29f53cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29f540: 0x96630020  lhu         $v1, 0x20($s3)
    ctx->pc = 0x29f540u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x29f544: 0x106500de  beq         $v1, $a1, . + 4 + (0xDE << 2)
    ctx->pc = 0x29F544u;
    {
        const bool branch_taken_0x29f544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x29F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F544u;
        // 0x29f548: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f544) {
            ctx->pc = 0x29F8C0u;
            goto label_29f8c0;
        }
    }
    ctx->pc = 0x29F54Cu;
    // 0x29f54c: 0x92630020  lbu         $v1, 0x20($s3)
    ctx->pc = 0x29f54cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x29f550: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x29f550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x29f554: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x29f554u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x29f558: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29F558u;
    {
        const bool branch_taken_0x29f558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F558u;
        // 0x29f55c: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f558) {
            ctx->pc = 0x29F578u;
            goto label_29f578;
        }
    }
    ctx->pc = 0x29F560u;
    // 0x29f560: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x29f560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x29f564: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x29f564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29f568: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x29f568u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x29f56c: 0x144300d4  bne         $v0, $v1, . + 4 + (0xD4 << 2)
    ctx->pc = 0x29F56Cu;
    {
        const bool branch_taken_0x29f56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F56Cu;
        // 0x29f570: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f56c) {
            ctx->pc = 0x29F8C0u;
            goto label_29f8c0;
        }
    }
    ctx->pc = 0x29F574u;
    // 0x29f574: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x29f574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_29f578:
    // 0x29f578: 0x8ec7016c  lw          $a3, 0x16C($s6)
    ctx->pc = 0x29f578u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 364)));
    // 0x29f57c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x29f57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x29f580: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x29f580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x29f584: 0x8ec60170  lw          $a2, 0x170($s6)
    ctx->pc = 0x29f584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 368)));
    // 0x29f588: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x29f588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29f58c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x29f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x29f590: 0x14620065  bne         $v1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x29F590u;
    {
        const bool branch_taken_0x29f590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29F594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F590u;
        // 0x29f594: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f590) {
            ctx->pc = 0x29F728u;
            goto label_29f728;
        }
    }
    ctx->pc = 0x29F598u;
    // 0x29f598: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x29f598u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x29f59c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x29f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x29f5a0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x29f5a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x29f5a4: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x29F5A4u;
    {
        const bool branch_taken_0x29f5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F5A4u;
        // 0x29f5a8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f5a4) {
            ctx->pc = 0x29F728u;
            goto label_29f728;
        }
    }
    ctx->pc = 0x29F5ACu;
    // 0x29f5ac: 0x90c20020  lbu         $v0, 0x20($a2)
    ctx->pc = 0x29f5acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x29f5b0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x29f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x29f5b4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x29f5b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x29f5b8: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x29F5B8u;
    {
        const bool branch_taken_0x29f5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F5B8u;
        // 0x29f5bc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f5b8) {
            ctx->pc = 0x29F728u;
            goto label_29f728;
        }
    }
    ctx->pc = 0x29F5C0u;
    // 0x29f5c0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x29f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29f5c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f5c8: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x29F5C8u;
    {
        const bool branch_taken_0x29f5c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F5C8u;
        // 0x29f5cc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f5c8) {
            ctx->pc = 0x29F644u;
            goto label_29f644;
        }
    }
    ctx->pc = 0x29F5D0u;
    // 0x29f5d0: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x29f5d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x29f5d4: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x29F5D4u;
    {
        const bool branch_taken_0x29f5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F5D4u;
        // 0x29f5d8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f5d4) {
            ctx->pc = 0x29F644u;
            goto label_29f644;
        }
    }
    ctx->pc = 0x29F5DCu;
    // 0x29f5dc: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x29f5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x29f5e0: 0x2404efff  addiu       $a0, $zero, -0x1001
    ctx->pc = 0x29f5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29f5e4: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29f5e8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x29f5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x29f5ec: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x29f5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x29f5f0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x29f5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29f5f4: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x29f5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x29f5f8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29f5fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29f5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29f600: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29f600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29f604: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x29f604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x29f608: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x29f608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29f60c: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x29f60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29f610: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29f610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29f614: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29f614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29f618: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29f618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29f61c: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x29f61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x29f620: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x29f620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29f624: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x29f624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29f628: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29f628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29f62c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29f62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29f630: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29f630u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29f634: 0x8e340060  lw          $s4, 0x60($s1)
    ctx->pc = 0x29f634u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x29f638: 0x8e350070  lw          $s5, 0x70($s1)
    ctx->pc = 0x29f638u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x29f63c: 0x8ec7016c  lw          $a3, 0x16C($s6)
    ctx->pc = 0x29f63cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 364)));
    // 0x29f640: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29f640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_29f644:
    // 0x29f644: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29f644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f648: 0x2457c9a8  addiu       $s7, $v0, -0x3658
    ctx->pc = 0x29f648u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953384));
    // 0x29f64c: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x29f64cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_29f650:
    // 0x29f650: 0x8ce20040  lw          $v0, 0x40($a3)
    ctx->pc = 0x29f650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x29f654: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x29f654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29f658: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x29F658u;
    {
        const bool branch_taken_0x29f658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f658) {
            ctx->pc = 0x29F65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F658u;
            // 0x29f65c: 0x8ce20040  lw          $v0, 0x40($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F69Cu;
            goto label_29f69c;
        }
    }
    ctx->pc = 0x29F660u;
    // 0x29f660: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x29f660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x29f664: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x29f664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29f668: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x29F668u;
    SET_GPR_U32(ctx, 31, 0x29F670u);
    ctx->pc = 0x29F66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F668u;
    // 0x29f66c: 0x8c440048  lw          $a0, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x29F668u, 0x29F670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F670u;
label_29f670:
    // 0x29f670: 0x8ec7016c  lw          $a3, 0x16C($s6)
    ctx->pc = 0x29f670u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 364)));
    // 0x29f674: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f678: 0x38a2001f  xori        $v0, $a1, 0x1F
    ctx->pc = 0x29f678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)31);
    // 0x29f67c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x29f67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29f680: 0x242280a  movz        $a1, $s2, $v0
    ctx->pc = 0x29f680u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
    // 0x29f684: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x29f684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29f688: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x29f688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x29f68c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29f68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29f690: 0x5483ffef  bnel        $a0, $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x29F690u;
    {
        const bool branch_taken_0x29f690 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x29f690) {
            ctx->pc = 0x29F694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F690u;
            // 0x29f694: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f650;
        }
    }
    ctx->pc = 0x29F698u;
    // 0x29f698: 0x8ce20040  lw          $v0, 0x40($a3)
    ctx->pc = 0x29f698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
label_29f69c:
    // 0x29f69c: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x29f69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x29f6a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29f6a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f6a4: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x29f6a4u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x29f6a8: 0x8ec60170  lw          $a2, 0x170($s6)
    ctx->pc = 0x29f6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 368)));
    // 0x29f6ac: 0x0  nop
    ctx->pc = 0x29f6acu;
    // NOP
label_29f6b0:
    // 0x29f6b0: 0x8cc20040  lw          $v0, 0x40($a2)
    ctx->pc = 0x29f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x29f6b4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x29f6b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29f6b8: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x29F6B8u;
    {
        const bool branch_taken_0x29f6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f6b8) {
            ctx->pc = 0x29F6BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F6B8u;
            // 0x29f6bc: 0x8cc20040  lw          $v0, 0x40($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F708u;
            goto label_29f708;
        }
    }
    ctx->pc = 0x29F6C0u;
    // 0x29f6c0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x29f6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x29f6c4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x29f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x29f6c8: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x29F6C8u;
    SET_GPR_U32(ctx, 31, 0x29F6D0u);
    ctx->pc = 0x29F6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F6C8u;
    // 0x29f6cc: 0x8c440048  lw          $a0, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x29F6C8u, 0x29F6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6D0u;
label_29f6d0:
    // 0x29f6d0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x29f6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29f6d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f6d8: 0x8ec60170  lw          $a2, 0x170($s6)
    ctx->pc = 0x29f6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 368)));
    // 0x29f6dc: 0x38a3001f  xori        $v1, $a1, 0x1F
    ctx->pc = 0x29f6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)31);
    // 0x29f6e0: 0x83280a  movz        $a1, $a0, $v1
    ctx->pc = 0x29f6e0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x29f6e4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x29f6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x29f6e8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29f6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29f6ec: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x29f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29f6f0: 0x2463c9a8  addiu       $v1, $v1, -0x3658
    ctx->pc = 0x29f6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953384));
    // 0x29f6f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29f6f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29f6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29f6fc: 0x5483ffec  bnel        $a0, $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x29F6FCu;
    {
        const bool branch_taken_0x29f6fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x29f6fc) {
            ctx->pc = 0x29F700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F6FCu;
            // 0x29f700: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f6b0;
        }
    }
    ctx->pc = 0x29F704u;
    // 0x29f704: 0x8cc20040  lw          $v0, 0x40($a2)
    ctx->pc = 0x29f704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
label_29f708:
    // 0x29f708: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29f708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f70c: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x29f70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x29f710: 0x12430003  beq         $s2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29F710u;
    {
        const bool branch_taken_0x29f710 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x29F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F710u;
        // 0x29f714: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f710) {
            ctx->pc = 0x29F720u;
            goto label_29f720;
        }
    }
    ctx->pc = 0x29F718u;
    // 0x29f718: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x29F718u;
    {
        const bool branch_taken_0x29f718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29F71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F718u;
        // 0x29f71c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f718) {
            ctx->pc = 0x29F788u;
            goto label_29f788;
        }
    }
    ctx->pc = 0x29F720u;
label_29f720:
    // 0x29f720: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x29F720u;
    {
        const bool branch_taken_0x29f720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F720u;
        // 0x29f724: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f720) {
            ctx->pc = 0x29F788u;
            goto label_29f788;
        }
    }
    ctx->pc = 0x29F728u;
label_29f728:
    // 0x29f728: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29f728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f72c: 0x245ec9a8  addiu       $fp, $v0, -0x3658
    ctx->pc = 0x29f72cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953384));
    // 0x29f730: 0x26720008  addiu       $s2, $s3, 0x8
    ctx->pc = 0x29f730u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x29f734: 0x24170008  addiu       $s7, $zero, 0x8
    ctx->pc = 0x29f734u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_29f738:
    // 0x29f738: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x29f738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x29f73c: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x29f73cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29f740: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29F740u;
    {
        const bool branch_taken_0x29f740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F740u;
        // 0x29f744: 0x2031026  xor         $v0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f740) {
            ctx->pc = 0x29F784u;
            goto label_29f784;
        }
    }
    ctx->pc = 0x29F748u;
    // 0x29f748: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x29f748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x29f74c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x29f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x29f750: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x29F750u;
    SET_GPR_U32(ctx, 31, 0x29F758u);
    ctx->pc = 0x29F754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F750u;
    // 0x29f754: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x29F750u, 0x29F758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F758u;
label_29f758:
    // 0x29f758: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x29f758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29f75c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f760: 0x38a3001f  xori        $v1, $a1, 0x1F
    ctx->pc = 0x29f760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)31);
    // 0x29f764: 0x2e3280a  movz        $a1, $s7, $v1
    ctx->pc = 0x29f764u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 23));
    // 0x29f768: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x29f768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29f76c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x29f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x29f770: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29f770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29f774: 0x5483fff0  bnel        $a0, $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x29F774u;
    {
        const bool branch_taken_0x29f774 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x29f774) {
            ctx->pc = 0x29F778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F774u;
            // 0x29f778: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f738;
        }
    }
    ctx->pc = 0x29F77Cu;
    // 0x29f77c: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x29f77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x29f780: 0x2031026  xor         $v0, $s0, $v1
    ctx->pc = 0x29f780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
label_29f784:
    // 0x29f784: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x29f784u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_29f788:
    // 0x29f788: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x29f788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x29f78c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29f78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f790: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x29f790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x29f794: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x29f794u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
    // 0x29f798: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x29f798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x29f79c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29f7a0: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x29f7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x29f7a4: 0xc092ebe  jal         func_24BAF8
    ctx->pc = 0x29F7A4u;
    SET_GPR_U32(ctx, 31, 0x29F7ACu);
    ctx->pc = 0x29F7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F7A4u;
    // 0x29f7a8: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BAF8u, 0x29F7A4u, 0x29F7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F7ACu;
label_29f7ac:
    // 0x29f7ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29F7ACu;
    {
        const bool branch_taken_0x29f7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F7ACu;
        // 0x29f7b0: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f7ac) {
            ctx->pc = 0x29F7BCu;
            goto label_29f7bc;
        }
    }
    ctx->pc = 0x29F7B4u;
    // 0x29f7b4: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29F7B4u;
    {
        const bool branch_taken_0x29f7b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F7B4u;
        // 0x29f7b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f7b4) {
            ctx->pc = 0x29F7C0u;
            goto label_29f7c0;
        }
    }
    ctx->pc = 0x29F7BCu;
label_29f7bc:
    // 0x29f7bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29f7bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f7c0:
    // 0x29f7c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29F7C0u;
    {
        const bool branch_taken_0x29f7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F7C0u;
        // 0x29f7c4: 0x8c620080  lw          $v0, 0x80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f7c0) {
            ctx->pc = 0x29F7D0u;
            goto label_29f7d0;
        }
    }
    ctx->pc = 0x29F7C8u;
    // 0x29f7c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29F7C8u;
    {
        const bool branch_taken_0x29f7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F7C8u;
        // 0x29f7cc: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f7c8) {
            ctx->pc = 0x29F7D8u;
            goto label_29f7d8;
        }
    }
    ctx->pc = 0x29F7D0u;
label_29f7d0:
    // 0x29f7d0: 0x2404efff  addiu       $a0, $zero, -0x1001
    ctx->pc = 0x29f7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29f7d4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x29f7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_29f7d8:
    // 0x29f7d8: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x29f7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x29f7dc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x29f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29f7e0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29f7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29f7e4: 0x2463c920  addiu       $v1, $v1, -0x36E0
    ctx->pc = 0x29f7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953248));
    // 0x29f7e8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29f7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f7ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29f7f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29f7f4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29F7F4u;
    SET_GPR_U32(ctx, 31, 0x29F7FCu);
    ctx->pc = 0x29F7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F7F4u;
    // 0x29f7f8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29F7F4u, 0x29F7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F7FCu;
label_29f7fc:
    // 0x29f7fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29f7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f800: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29f800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f804: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x29F804u;
    SET_GPR_U32(ctx, 31, 0x29F80Cu);
    ctx->pc = 0x29F808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F804u;
    // 0x29f808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x29F804u, 0x29F80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F80Cu;
label_29f80c:
    // 0x29f80c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f810: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29f810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f814: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x29F814u;
    SET_GPR_U32(ctx, 31, 0x29F81Cu);
    ctx->pc = 0x29F818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F814u;
    // 0x29f818: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x29F814u, 0x29F81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F81Cu;
label_29f81c:
    // 0x29f81c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29f81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f820: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x29f820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29f824: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29f824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f828: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x29f828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29f82c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29F82Cu;
    SET_GPR_U32(ctx, 31, 0x29F834u);
    ctx->pc = 0x29F830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F82Cu;
    // 0x29f830: 0x46156300  add.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29F82Cu, 0x29F834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F834u;
label_29f834:
    // 0x29f834: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29f834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f838: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x29f838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29f83c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29f83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f840: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29F840u;
    SET_GPR_U32(ctx, 31, 0x29F848u);
    ctx->pc = 0x29F844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F840u;
    // 0x29f844: 0x46156300  add.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29F840u, 0x29F848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F848u;
label_29f848:
    // 0x29f848: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x29f848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x29f84c: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x29f84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29f850: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29f850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f854: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29F854u;
    SET_GPR_U32(ctx, 31, 0x29F85Cu);
    ctx->pc = 0x29F858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F854u;
    // 0x29f858: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29F854u, 0x29F85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F85Cu;
label_29f85c:
    // 0x29f85c: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x29f85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x29f860: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x29f860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29f864: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29f864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f868: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29F868u;
    SET_GPR_U32(ctx, 31, 0x29F870u);
    ctx->pc = 0x29F86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F868u;
    // 0x29f86c: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29F868u, 0x29F870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F870u;
label_29f870:
    // 0x29f870: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29f870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29f874: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x29f874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x29f878: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x29f878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29f87c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x29f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x29f880: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x29f880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29f884: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29f884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29f888: 0x5083000d  beql        $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29F888u;
    {
        const bool branch_taken_0x29f888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29f888) {
            ctx->pc = 0x29F88Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F888u;
            // 0x29f88c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F8C0u;
            goto label_29f8c0;
        }
    }
    ctx->pc = 0x29F890u;
    // 0x29f890: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x29F890u;
    SET_GPR_U32(ctx, 31, 0x29F898u);
    ctx->pc = 0x29F894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F890u;
    // 0x29f894: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x29F890u, 0x29F898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F898u;
label_29f898:
    // 0x29f898: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x29F898u;
    {
        const bool branch_taken_0x29f898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f898) {
            ctx->pc = 0x29F89Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F898u;
            // 0x29f89c: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F8B8u;
            goto label_29f8b8;
        }
    }
    ctx->pc = 0x29F8A0u;
    // 0x29f8a0: 0x8ec40130  lw          $a0, 0x130($s6)
    ctx->pc = 0x29f8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 304)));
    // 0x29f8a4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x29f8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f8a8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x29f8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29f8ac: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x29F8ACu;
    SET_GPR_U32(ctx, 31, 0x29F8B4u);
    ctx->pc = 0x29F8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F8ACu;
    // 0x29f8b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x29F8ACu, 0x29F8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F8B4u;
label_29f8b4:
    // 0x29f8b4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x29f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_29f8b8:
    // 0x29f8b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29f8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29f8bc:
    // 0x29f8bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29f8c0:
    // 0x29f8c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29f8c4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x29f8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x29f8c8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x29f8c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x29f8cc: 0x5440fefe  bnel        $v0, $zero, . + 4 + (-0x102 << 2)
    ctx->pc = 0x29F8CCu;
    {
        const bool branch_taken_0x29f8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f8cc) {
            ctx->pc = 0x29F8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F8CCu;
            // 0x29f8d0: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f4c8;
        }
    }
    ctx->pc = 0x29F8D4u;
    // 0x29f8d4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x29f8d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29f8d8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x29f8d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29f8dc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x29f8dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29f8e0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x29f8e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f8e4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29f8e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29f8e8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x29f8e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29f8ec: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x29f8ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29f8f0: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x29f8f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f8f4: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x29f8f4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29f8f8: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x29f8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29f8fc: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x29f8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29f900: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x29f900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29f904: 0x3e00008  jr          $ra
    ctx->pc = 0x29F904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F904u;
        // 0x29f908: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F90Cu;
    // 0x29f90c: 0x0  nop
    ctx->pc = 0x29f90cu;
    // NOP
    ctx->pc = 0x29f910u;
}
