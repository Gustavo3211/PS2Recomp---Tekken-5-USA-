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

// Function: sub_00257878
// Address: 0x257878 - 0x257b68
void sub_00257878_0x257878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257878_0x257878");
#endif

    switch (ctx->pc) {
        case 0x257984u: goto label_257984;
        case 0x257a94u: goto label_257a94;
        case 0x257b10u: goto label_257b10;
        case 0x257b44u: goto label_257b44;
        default: break;
    }

    ctx->pc = 0x257878u;

    // 0x257878: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x257878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x25787c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x25787cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257880: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x257880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x257884: 0x3c0d0047  lui         $t5, 0x47
    ctx->pc = 0x257884u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)71 << 16));
    // 0x257888: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x257888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x25788c: 0x25ad20c0  addiu       $t5, $t5, 0x20C0
    ctx->pc = 0x25788cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8384));
    // 0x257890: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x257890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x257894: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x257894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x257898: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x257898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x25789c: 0x25b30020  addiu       $s3, $t5, 0x20
    ctx->pc = 0x25789cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x2578a0: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x2578a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x2578a4: 0x25b40010  addiu       $s4, $t5, 0x10
    ctx->pc = 0x2578a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x2578a8: 0xffb500c8  sd          $s5, 0xC8($sp)
    ctx->pc = 0x2578a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 21));
    // 0x2578ac: 0x25b50030  addiu       $s5, $t5, 0x30
    ctx->pc = 0x2578acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 13), 48));
    // 0x2578b0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2578b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2578b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2578b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2578b8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2578b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2578bc: 0x8c4c0008  lw          $t4, 0x8($v0)
    ctx->pc = 0x2578bcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2578c0: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x2578c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2578c4: 0x878821  addu        $s1, $a0, $a3
    ctx->pc = 0x2578c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2578c8: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x2578c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2578cc: 0x1886021  addu        $t4, $t4, $t0
    ctx->pc = 0x2578ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x2578d0: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2578d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2578d4: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x2578d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2578d8: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2578d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2578dc: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x2578dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x2578e0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2578e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2578e4: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x2578e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
    // 0x2578e8: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2578e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2578ec: 0xafac0068  sw          $t4, 0x68($sp)
    ctx->pc = 0x2578ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 12));
    // 0x2578f0: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x2578f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2578f4: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x2578f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x2578f8: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x2578f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2578fc: 0xafb10074  sw          $s1, 0x74($sp)
    ctx->pc = 0x2578fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 17));
    // 0x257900: 0xafac0078  sw          $t4, 0x78($sp)
    ctx->pc = 0x257900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 12));
    // 0x257904: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x257904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x257908: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x257908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x25790c: 0xafa40084  sw          $a0, 0x84($sp)
    ctx->pc = 0x25790cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 4));
    // 0x257910: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x257910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x257914: 0xafb20080  sw          $s2, 0x80($sp)
    ctx->pc = 0x257914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 18));
    // 0x257918: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x257918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25791c: 0xdfaf0068  ld          $t7, 0x68($sp)
    ctx->pc = 0x25791cu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x257920: 0xdfae0070  ld          $t6, 0x70($sp)
    ctx->pc = 0x257920u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x257924: 0xdfa20078  ld          $v0, 0x78($sp)
    ctx->pc = 0x257924u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x257928: 0xdfa30080  ld          $v1, 0x80($sp)
    ctx->pc = 0x257928u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25792c: 0xafac0088  sw          $t4, 0x88($sp)
    ctx->pc = 0x25792cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 12));
    // 0x257930: 0xafb20090  sw          $s2, 0x90($sp)
    ctx->pc = 0x257930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 18));
    // 0x257934: 0xafb10094  sw          $s1, 0x94($sp)
    ctx->pc = 0x257934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 17));
    // 0x257938: 0xafac0098  sw          $t4, 0x98($sp)
    ctx->pc = 0x257938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 12));
    // 0x25793c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x25793cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x257940: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x257940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x257944: 0xffaf0028  sd          $t7, 0x28($sp)
    ctx->pc = 0x257944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 15));
    // 0x257948: 0xffae0030  sd          $t6, 0x30($sp)
    ctx->pc = 0x257948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 14));
    // 0x25794c: 0xffa20038  sd          $v0, 0x38($sp)
    ctx->pc = 0x25794cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 2));
    // 0x257950: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x257950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x257954: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x257954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
    // 0x257958: 0xdfa20088  ld          $v0, 0x88($sp)
    ctx->pc = 0x257958u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x25795c: 0xdfa30090  ld          $v1, 0x90($sp)
    ctx->pc = 0x25795cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x257960: 0xdfac0098  ld          $t4, 0x98($sp)
    ctx->pc = 0x257960u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x257964: 0xafb40008  sw          $s4, 0x8($sp)
    ctx->pc = 0x257964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 20));
    // 0x257968: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x257968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x25796c: 0xafb50018  sw          $s5, 0x18($sp)
    ctx->pc = 0x25796cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 21));
    // 0x257970: 0xffa20048  sd          $v0, 0x48($sp)
    ctx->pc = 0x257970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 2));
    // 0x257974: 0xffa30050  sd          $v1, 0x50($sp)
    ctx->pc = 0x257974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 3));
    // 0x257978: 0xffac0058  sd          $t4, 0x58($sp)
    ctx->pc = 0x257978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 12));
    // 0x25797c: 0xc095ce6  jal         func_257398
    ctx->pc = 0x25797Cu;
    SET_GPR_U32(ctx, 31, 0x257984u);
    ctx->pc = 0x257980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25797Cu;
    // 0x257980: 0xafad0000  sw          $t5, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257398u, 0x25797Cu, 0x257984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257984u;
label_257984:
    // 0x257984: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x257984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x257988: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x257988u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25798c: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x25798cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x257990: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x257990u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x257994: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x257994u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x257998: 0xdfb500c8  ld          $s5, 0xC8($sp)
    ctx->pc = 0x257998u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x25799c: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x25799cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2579a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2579A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2579A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2579A0u;
        // 0x2579a4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2579A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2579A8u;
    // 0x2579a8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2579a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2579ac: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x2579acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x2579b0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2579b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2579b4: 0xffb00120  sd          $s0, 0x120($sp)
    ctx->pc = 0x2579b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
    // 0x2579b8: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2579b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2579bc: 0xffb10128  sd          $s1, 0x128($sp)
    ctx->pc = 0x2579bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 17));
    // 0x2579c0: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x2579c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x2579c4: 0xffb30138  sd          $s3, 0x138($sp)
    ctx->pc = 0x2579c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 19));
    // 0x2579c8: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x2579c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x2579cc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2579ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2579d0: 0x8cca0008  lw          $t2, 0x8($a2)
    ctx->pc = 0x2579d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2579d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2579d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2579d8: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x2579d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2579dc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2579dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2579e0: 0x1495021  addu        $t2, $t2, $t1
    ctx->pc = 0x2579e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x2579e4: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2579e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2579e8: 0x485821  addu        $t3, $v0, $t0
    ctx->pc = 0x2579e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2579ec: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x2579ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2579f0: 0x683021  addu        $a2, $v1, $t0
    ctx->pc = 0x2579f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2579f4: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2579f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2579f8: 0xa86823  subu        $t5, $a1, $t0
    ctx->pc = 0x2579f8u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2579fc: 0x1286023  subu        $t4, $t1, $t0
    ctx->pc = 0x2579fcu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x257a00: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x257a00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x257a04: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x257a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x257a08: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x257a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x257a0c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x257a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x257a10: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x257a10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x257a14: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x257a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x257a18: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x257a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x257a1c: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x257a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x257a20: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x257a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x257a24: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x257a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x257a28: 0xafa600b4  sw          $a2, 0xB4($sp)
    ctx->pc = 0x257a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 6));
    // 0x257a2c: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x257a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x257a30: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x257a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x257a34: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x257a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x257a38: 0xafab00c0  sw          $t3, 0xC0($sp)
    ctx->pc = 0x257a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 11));
    // 0x257a3c: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x257a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
    // 0x257a40: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x257a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x257a44: 0xafab00d0  sw          $t3, 0xD0($sp)
    ctx->pc = 0x257a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 11));
    // 0x257a48: 0xafa600d4  sw          $a2, 0xD4($sp)
    ctx->pc = 0x257a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 6));
    // 0x257a4c: 0xafa400d8  sw          $a0, 0xD8($sp)
    ctx->pc = 0x257a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 4));
    // 0x257a50: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x257a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x257a54: 0xafac00e0  sw          $t4, 0xE0($sp)
    ctx->pc = 0x257a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 12));
    // 0x257a58: 0xafad00e4  sw          $t5, 0xE4($sp)
    ctx->pc = 0x257a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 13));
    // 0x257a5c: 0xafaa00e8  sw          $t2, 0xE8($sp)
    ctx->pc = 0x257a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 10));
    // 0x257a60: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x257a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x257a64: 0xafac00f0  sw          $t4, 0xF0($sp)
    ctx->pc = 0x257a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 12));
    // 0x257a68: 0xafa500f4  sw          $a1, 0xF4($sp)
    ctx->pc = 0x257a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 5));
    // 0x257a6c: 0xafaa00f8  sw          $t2, 0xF8($sp)
    ctx->pc = 0x257a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 10));
    // 0x257a70: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x257a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    // 0x257a74: 0xafad0104  sw          $t5, 0x104($sp)
    ctx->pc = 0x257a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 13));
    // 0x257a78: 0xafa90100  sw          $t1, 0x100($sp)
    ctx->pc = 0x257a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 9));
    // 0x257a7c: 0xafaa0108  sw          $t2, 0x108($sp)
    ctx->pc = 0x257a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 10));
    // 0x257a80: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x257a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
    // 0x257a84: 0xafa90110  sw          $t1, 0x110($sp)
    ctx->pc = 0x257a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 9));
    // 0x257a88: 0xafa50114  sw          $a1, 0x114($sp)
    ctx->pc = 0x257a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 5));
    // 0x257a8c: 0xafaa0118  sw          $t2, 0x118($sp)
    ctx->pc = 0x257a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 10));
    // 0x257a90: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x257a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
label_257a94:
    // 0x257a94: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x257a94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x257a98: 0xdce40008  ld          $a0, 0x8($a3)
    ctx->pc = 0x257a98u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x257a9c: 0xdce50010  ld          $a1, 0x10($a3)
    ctx->pc = 0x257a9cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x257aa0: 0xdce60018  ld          $a2, 0x18($a3)
    ctx->pc = 0x257aa0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x257aa4: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x257aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x257aa8: 0xfd040008  sd          $a0, 0x8($t0)
    ctx->pc = 0x257aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 4));
    // 0x257aac: 0xfd050010  sd          $a1, 0x10($t0)
    ctx->pc = 0x257aacu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 5));
    // 0x257ab0: 0xfd060018  sd          $a2, 0x18($t0)
    ctx->pc = 0x257ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 6));
    // 0x257ab4: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x257ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x257ab8: 0x0  nop
    ctx->pc = 0x257ab8u;
    // NOP
    // 0x257abc: 0x0  nop
    ctx->pc = 0x257abcu;
    // NOP
    // 0x257ac0: 0x14e2fff4  bne         $a3, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x257AC0u;
    {
        const bool branch_taken_0x257ac0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x257AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257AC0u;
        // 0x257ac4: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257ac0) {
            ctx->pc = 0x257A94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257a94;
        }
    }
    ctx->pc = 0x257AC8u;
    // 0x257ac8: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x257ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x257acc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x257accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x257ad0: 0x261020c0  addiu       $s0, $s0, 0x20C0
    ctx->pc = 0x257ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8384));
    // 0x257ad4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x257ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x257ad8: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x257ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x257adc: 0x26120020  addiu       $s2, $s0, 0x20
    ctx->pc = 0x257adcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x257ae0: 0x26130030  addiu       $s3, $s0, 0x30
    ctx->pc = 0x257ae0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x257ae4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x257ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x257ae8: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x257ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x257aec: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x257aecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257af0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x257af0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257af4: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x257af4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257af8: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x257af8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257afc: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x257afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x257b00: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x257b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x257b04: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x257b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x257b08: 0xc095ce6  jal         func_257398
    ctx->pc = 0x257B08u;
    SET_GPR_U32(ctx, 31, 0x257B10u);
    ctx->pc = 0x257B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257B08u;
    // 0x257b0c: 0xafb30018  sw          $s3, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257398u, 0x257B08u, 0x257B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257B10u;
label_257b10:
    // 0x257b10: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x257b10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b14: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x257b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x257b18: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x257b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x257b1c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x257b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x257b20: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x257b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x257b24: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x257b24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b28: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x257b28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b2c: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x257b2cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b30: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x257b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x257b34: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x257b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x257b38: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x257b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x257b3c: 0xc095ce6  jal         func_257398
    ctx->pc = 0x257B3Cu;
    SET_GPR_U32(ctx, 31, 0x257B44u);
    ctx->pc = 0x257B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257B3Cu;
    // 0x257b40: 0xafb30018  sw          $s3, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257398u, 0x257B3Cu, 0x257B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257B44u;
label_257b44:
    // 0x257b44: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x257b44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x257b48: 0xdfb10128  ld          $s1, 0x128($sp)
    ctx->pc = 0x257b48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x257b4c: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x257b4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x257b50: 0xdfb30138  ld          $s3, 0x138($sp)
    ctx->pc = 0x257b50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x257b54: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x257b54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x257b58: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x257b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x257b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x257B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B5Cu;
        // 0x257b60: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257B64u;
    // 0x257b64: 0x0  nop
    ctx->pc = 0x257b64u;
    // NOP
    ctx->pc = 0x257b68u;
}
